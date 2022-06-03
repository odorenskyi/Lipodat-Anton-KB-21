#ifndef MOD_LIPODAT_H_INCLUDED
#define MOD_LIPODAT_H_INCLUDED

#include <cmath>
#include <math.h>
#include <iostream>

 float s_calculation(float x, float y, float z){
    float S;
    S = 1/2 *pow(x,2)-sqrt(abs(pow(y+z,2)- pow(x,5)))-log(abs(sin (z)));
    return S;

}


#endif // MOD_LIPODAT_H_INCLUDED
