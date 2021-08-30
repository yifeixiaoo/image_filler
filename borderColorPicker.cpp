#include "borderColorPicker.h"

borderColorPicker::borderColorPicker(HSLAPixel fillColor, PNG & img, double tolerance,HSLAPixel center)
{
    color = fillColor;
    im = img;
    tol = tolerance;
    ctr = center;
/* Your code here! */
}

HSLAPixel borderColorPicker::operator()(int x, int y)
{
    if (near(x,y)){
        return color;
    }else{
        return ctr;
    }

/* Your code here! */
}

bool borderColorPicker::near(int x,int y){
    // might have to look at near border case
    for (int i = (x-3); i <= (x+3);i++){
        for (int j = (y-3); j <= (y+3); j++){
        if (((x-i)^2+(y-j)^2) <= (3^2)){
            if ((ctr.dist(*im.getPixel(i,j)) > tol) || (i>=(im.width()-1)) || (j>=(im.height()-1)) ){
                return true;
            }
        }
        }
    }
    return false; 
}
