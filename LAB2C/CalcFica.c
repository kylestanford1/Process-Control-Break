#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//CALCFICA FUNCTION
float CalcFica(float gross, float ytd){
    float Ftax;
    float taxrate = 0.071;
    float sum = 0.0;
    if(ytd < 110100){
            sum = ytd+gross;
            if(sum <= 110100){
                Ftax = gross * taxrate;
            }
            else{
                float ex = 110100 - ytd;
                Ftax = ex * taxrate;
            }
        }
        else{
        Ftax = 0.00;
        }
    return Ftax;
}
