#ifndef CUSTOMCOLORPICKER_H
#define CUSTOMCOLORPICKER_H

#include "colorPicker.h"

class customColorPicker: public colorPicker
{
    customColorPicker(HSLAPixel filColor, int stripeSpacing);

    virtual HSLAPixel operator()(int x, int y);

  private:
    HSLAPixel color; /**< Color used for the stripe. */
    int spacing;     /**< Space between stripes. */

};

#endif

