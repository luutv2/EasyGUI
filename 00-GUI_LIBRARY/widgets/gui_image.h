/**
 * \author  Tilen Majerle <tilen@majerle.eu>
 * \brief   GUI IMAGE
 *  
\verbatim
   ----------------------------------------------------------------------
    Copyright (c) 2017 Tilen Majerle

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software, 
    and to permit persons to whom the Software is furnished to do so, 
    subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
    AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
   ----------------------------------------------------------------------
\endverbatim
 */
#ifndef GUI_IMAGE_H
#define GUI_IMAGE_H

/* C++ detection */
#ifdef __cplusplus
extern "C" {
#endif

/**
 * \addtogroup      GUI_WIDGETS
 * \{
 */
#include "gui_widget.h"

/**
 * \defgroup        GUI_IMAGE Image
 * \brief           Image display widget
 * \{
 */

#if defined(GUI_INTERNAL) || defined(DOXYGEN)
/**
 * \brief           Image widget structure
 */
typedef struct GUI_IMAGE_t {
    GUI_HANDLE C;                           /*!< GUI handle object, must always be first on list */
    
    const GUI_IMAGE_DESC_t* Image;          /*!< Pointer to image object to draw */
} GUI_IMAGE_t;
#endif /* defined(GUI_INTERNAL) || defined(DOXYGEN) */
    
/**
 * \brief           Create new image widget
 * \param[in]       id: Widget unique ID to use for identity for callback processing
 * \param[in]       x: Widget X position relative to parent widget
 * \param[in]       y: Widget Y position relative to parent widget
 * \param[in]       width: Widget width in units of pixels
 * \param[in]       height: Widget height in uints of pixels
 * \param[in]       parent: Parent widget handle. Set to NULL to use current active parent widget
 * \param[in]       cb: Pointer to \ref GUI_WIDGET_CALLBACK_t callback function. Set to NULL to use default widget callback
 * \param[in]       flags: Flags for widget creation
 * \retval          > 0: \ref GUI_HANDLE_p object of created widget
 * \retval          0: Widget creation failed
 */
GUI_HANDLE_p GUI_IMAGE_Create(GUI_ID_t id, GUI_iDim_t x, GUI_iDim_t y, GUI_Dim_t width, GUI_Dim_t height, GUI_HANDLE_p parent, GUI_WIDGET_CALLBACK_t cb, uint16_t flags);

/**
 * \brief           Set image source to draw
 * \param[in]       h: Widget handle
 * \param[in]       *img: Pointer to \ref GUI_IMAGE_DESC_t image object. Use NULL to clear image
 * \retval          1: Image was set ok
 * \retval          0: Image was not set
 */
uint8_t GUI_IMAGE_SetSource(GUI_HANDLE_p h, const GUI_IMAGE_DESC_t* img);

/**
 * \}
 */

/**
 * \}
 */

/* C++ detection */
#ifdef __cplusplus
}
#endif

#endif
