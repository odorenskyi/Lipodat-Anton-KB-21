#include <iostream>
#include <math.h>
#include "mod_lipodat.h"

using namespace std;

int main()
{
    system("chcp 1251 && cls");
    float x[5] = {4, 10, 7, 2, 4};
    float y[5] = {2,  3, 2, 7, 3};
    float z[5] = {6,  4, 7, 9, 20};
    float result[5] = {-29.7088, -315.872, -128.909, -14.0802, -22.1575};
    float SS;
    for(int i = 0; i<5; i++){
        SS = (floor(s_calculation(x[i], y[i], z[i]) * 1000))/1000;
        if (SS == result[i]){
            cout << "TestCase #" << i+1 << " passed" << endl;
        }
        else cout << "TestCase #" << i+1 << " falled" << endl;
    }

 return 0;
}
