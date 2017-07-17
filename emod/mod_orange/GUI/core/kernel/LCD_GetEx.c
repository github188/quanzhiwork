/*
**********************************************************************************************************************
*                                                    ePDK
*                                    the Easy Portable/Player Develop Kits
*                                              eMOD Sub-System
*
*                                   (c) Copyright 2007-2009, Steven.ZGJ.China
*                                             All Rights Reserved
*
* Moudle  : lemon
* File    : LCD_GetEx.c
* Purpose : Routines returning info at runtime
*
* By      : Miracle
* Version : v1.0
* Date    : 2009-2-19 15:54:04
**********************************************************************************************************************
*/

#include <stddef.h>           /* needed for definition of NULL */

#include "gui_core_kernel_private.h"
/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       LCD_GetXSizeEx
*/
int LCD_GetXSizeEx(int LayerIndex)
{
    //if (LayerIndex == 0) {            // mcl 2008.11.29
    return Screen_Context.LCDXSize[LayerIndex];
    // }
    /*
    #if GUI_NUM_LAYERS > 1
      if (LayerIndex == 1) {
        return LCD_XSIZE_1;
      }
    #endif
    #if GUI_NUM_LAYERS > 2
      if (LayerIndex == 2) {
        return LCD_XSIZE_2;
      }
    #endif
    #if GUI_NUM_LAYERS > 3
      if (LayerIndex == 3) {
        return LCD_XSIZE_3;
      }
    #endif
    #if GUI_NUM_LAYERS > 4
      if (LayerIndex == 4) {
        return LCD_XSIZE_4;
      }
    #endif
    */
    //return 0;
}

/*********************************************************************
*
*       LCD_GetYSizeEx
*/
int LCD_GetYSizeEx(int LayerIndex)
{
    //  if (LayerIndex == 0) {   //  mcl  2008.11.29
    return Screen_Context.LCDYSize[LayerIndex];
    //}
    /*
    #if GUI_NUM_LAYERS > 1
      if (LayerIndex == 1) {
        return LCD_YSIZE_1;
      }
    #endif
    #if GUI_NUM_LAYERS > 2
      if (LayerIndex == 2) {
        return LCD_YSIZE_2;
      }
    #endif
    #if GUI_NUM_LAYERS > 3
      if (LayerIndex == 3) {
        return LCD_YSIZE_3;
      }
    #endif
    #if GUI_NUM_LAYERS > 4
      if (LayerIndex == 4) {
        return LCD_YSIZE_4;
      }
    #endif
    return 0;*/
}


/*********************************************************************
*
*       LCD_GetVXSizeEx
*/
int LCD_GetVXSizeEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_VXSIZE;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_VXSIZE_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_VXSIZE_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_VXSIZE_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_VXSIZE_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetVYSizeEx
*/
int LCD_GetVYSizeEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_VYSIZE;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_VYSIZE_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_VYSIZE_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_VYSIZE_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_VYSIZE_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetBitsPerPixelEx
*/
int LCD_GetBitsPerPixelEx(int LayerIndex)
{

    return LCD_BITSPERPIXEL;

    /*
      if (LayerIndex == 0) {
        return LCD_BITSPERPIXEL;
      }
      #if GUI_NUM_LAYERS > 1
        if (LayerIndex == 1) {
          return LCD_BITSPERPIXEL_1;
        }
      #endif
      #if GUI_NUM_LAYERS > 2
        if (LayerIndex == 2) {
          return LCD_BITSPERPIXEL_2;
        }
      #endif
      #if GUI_NUM_LAYERS > 3
        if (LayerIndex == 3) {
          return LCD_BITSPERPIXEL_3;
        }
      #endif
      #if GUI_NUM_LAYERS > 4
        if (LayerIndex == 4) {
          return LCD_BITSPERPIXEL_4;
        }
      #endif
      */
    // return 0;
}

/*********************************************************************
*
*       LCD_GetBitsPerPixel_L0Ex
*/
int LCD_GetBitsPerPixel_L0Ex(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_BITSPERPIXEL_L0;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_BITSPERPIXEL_L0_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_BITSPERPIXEL_L0_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_BITSPERPIXEL_L0_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_BITSPERPIXEL_L0_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetNumColorsEx
*/
U32 LCD_GetNumColorsEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_NUM_COLORS;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_NUM_COLORS_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_NUM_COLORS_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_NUM_COLORS_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_NUM_COLORS_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetYMagEx
*/
int LCD_GetYMagEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_YMAG;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_YMAG_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_YMAG_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_YMAG_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_YMAG_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetXMagEx
*/
int LCD_GetXMagEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_XMAG;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_XMAG_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_XMAG_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_XMAG_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_XMAG_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetFixedPaletteEx
*/
I32 LCD_GetFixedPaletteEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_FIXEDPALETTE;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_FIXEDPALETTE_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_FIXEDPALETTE_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_FIXEDPALETTE_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_FIXEDPALETTE_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetMirrorXEx
*/
int LCD_GetMirrorXEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_MIRROR_X;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_MIRROR_X_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_MIRROR_X_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_MIRROR_X_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_MIRROR_X_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetMirrorYEx
*/
int LCD_GetMirrorYEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_MIRROR_Y;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_MIRROR_Y_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_MIRROR_Y_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_MIRROR_Y_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_MIRROR_Y_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetSwapXYEx
*/
int LCD_GetSwapXYEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_SWAP_XY;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_SWAP_XY_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_SWAP_XY_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_SWAP_XY_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_SWAP_XY_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetSwapRBEx
*/
int LCD_GetSwapRBEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_SWAP_RB;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_SWAP_RB_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_SWAP_RB_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_SWAP_RB_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_SWAP_RB_4;
    }
#endif
    return 0;
}

/*********************************************************************
*
*       LCD_GetDeltaModeEx
*/
int LCD_GetDeltaModeEx(int LayerIndex)
{
    if (LayerIndex == 0)
    {
        return LCD_DELTA_MODE;
    }
#if GUI_NUM_LAYERS > 1
    if (LayerIndex == 1)
    {
        return LCD_DELTA_MODE_1;
    }
#endif
#if GUI_NUM_LAYERS > 2
    if (LayerIndex == 2)
    {
        return LCD_DELTA_MODE_2;
    }
#endif
#if GUI_NUM_LAYERS > 3
    if (LayerIndex == 3)
    {
        return LCD_DELTA_MODE_3;
    }
#endif
#if GUI_NUM_LAYERS > 4
    if (LayerIndex == 4)
    {
        return LCD_DELTA_MODE_4;
    }
#endif
    return 0;
}

/************************* End of file ******************************/