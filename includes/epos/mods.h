/*
*********************************************************************************************************
*											        ePOS
*						           the Easy Portable/Player Operation System
*									           MODS sub-system
*
*						        (c) Copyright 2006-2007, Steven.ZGJ China
*											All	Rights Reserved
*
* File   : MODS.h
* Version: V1.0
* By     : steven.zgj
*********************************************************************************************************
*/

#ifndef _MODS_H_
#define _MODS_H_

#include "typedef.h"
#include "cfgs.h"


#ifdef EPDK_USED_BY_KRNL
#define __swi(x)
#endif
//**********************************************************************************************************
//* define level 0( system level)
//************************************************
// ��������
#define MODS_maxseg 16
#define MODS_midmax 64



//************************************************
// �������Ͷ���
typedef struct __MP         //mp�ľ���ṹ��ģ���Լ����ж��壬��С��������ǿ�Ƶ�һ��byte���mid
{
    //mid�����ڵ��þ����module����ʱfsfc��
    __u8            mid;
    __u8            userdef;
} __mp;

typedef struct __MIF
{
    __s32          (*MInit)(void);              //��install/resetģ��ʱʹ��,��ģ����Ҫ��̨����,�����ڴ�����
    __s32          (*MExit)(void);              //��uninstallģ��ʱʹ��,��ģ���к�̨����,�����ڴ˴��ر�
    __mp          *(*MOpen)(__u32 id, __u32 mode);   //��һ��ģ����
    __s32          (*MClose)(__mp *mp);         //�ر�һ��ģ����
    __u32          (*MRead)(void *pdata, __u32 size, __u32 n, __mp *mp);                  //ģ���
    __u32          (*MWrite)(const void *pdata, __u32 size, __u32 n, __mp *mp);           //ģ��д
    __s32          (*MIoctrl)(__mp *mp, __u32 cmd, __s32 aux, void *pbuffer);             //ģ�����
} __mif_t;
typedef struct __MODS_MGSEC
{
    char            magic[8];           // "ePDK.mod"
    __u32           version;
    __u8            type;               // 0xff: user module(midware)

    __u32           heapaddr;           //heap��32M�ռ��ڵ�λ�ã�ͨ�������1M(31*1024*1024)
    //����ַ����0����ô��ʾ���̲���Ҫ�ֲ��ѣ�������ϵͳ��
    __u32           heapsize;	        //heap�ĳ�ʼ��С
    __mif_t         mif;                //pcb���һ��������׵�ַ
} __mods_mgsec_t;


typedef struct __MODS_MCB        		//���̿��ƿ�
{
    __krnl_xcb_t    xcb;
    __u8            type;               //ϵͳģ����û�ģ��
    __mif_t         mif;                //ģ����ڣ�ģ��ı�׼������ڵ�ַ����ڴ˴�
    __u32			vmbitmap;			//ģ�������ڴ�ռ�ռ�����������ж��ģ��ʱ�������ڴ�ʱ���ͷ�
} __mods_mcb_t;

//************************************************
// ��������
/* GLOBAL VARIABLES */

//************************************************
// ��������
/* system call table */
typedef struct
{
    __pSWI_t esMODS_MInstall              ;
    __pSWI_t esMODS_MUninstall            ;
    __pSWI_t esMODS_MOpen                 ;
    __pSWI_t esMODS_MClose                ;
    __pSWI_t esMODS_MRead                 ;
    __pSWI_t esMODS_MWrite                ;
    __pSWI_t esMODS_MIoctrl               ;

} SWIHandler_MODS_t;
#ifndef SIM_PC_WIN
#define SYSCALL_MODS(x,y) __swi(SWINO(SWINO_MODS, SWIHandler_MODS_t, y))x y
#else
#define SYSCALL_MODS(x,y) x y
#endif
SYSCALL_MODS(__u32, esMODS_MInstall  )(const char *mfile, __u8 mode);
SYSCALL_MODS(__s32, esMODS_MUninstall)(__u8 mid);
SYSCALL_MODS(__mp *, esMODS_MOpen     )(__u8 mid, __u8 mode);
SYSCALL_MODS(__s32, esMODS_MClose    )(__mp *mp);
SYSCALL_MODS(__u32, esMODS_MRead     )(void *pdata, __u32 size, __u32 n, __mp *mp);
SYSCALL_MODS(__u32, esMODS_MWrite    )(const void *pdata, __u32 size, __u32 n, __mp *mp);
SYSCALL_MODS(__s32, esMODS_MIoctrl   )(__mp *mp, __u32 cmd, __s32 aux, void *pbuffer);

//**********************************************************************************************************

//**********************************************************************************************************
//* define level 1( system level)
//************************************************
// ��������

//************************************************
// �������Ͷ���

//************************************************
// ��������

extern SWIHandler_MODS_t SWIHandler_MODS;
//************************************************
// ��������
__s32 MODS_Init	(void);
__s32 MODS_Exit  (void);


//**********************************************************************************************************

#endif  /* _MODS_H_ */

