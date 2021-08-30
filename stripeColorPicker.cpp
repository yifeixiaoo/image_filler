#include "stripeColorPicker.h"

stripeColorPicker::stripeColorPicker(HSLAPixel fillColor, int stripeSpacing)
{
    color = fillColor;
    spacing = stripeSpacing;
/* your code here! */
}

HSLAPixel stripeColorPicker::operator()(int x, int y)
{
    if ((x % spacing) == 0){
        return color;
    }
    else{
        HSLAPixel * white = new HSLAPixel();
        return * white;
    }
/* your code here! */
}
