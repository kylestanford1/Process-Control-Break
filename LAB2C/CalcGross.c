#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//CALCGROSS FUNCTION
float CalcGross(float hrs, float pr){
    float overtime = 0.0;
    float overtimeG = 0.0;
    float gross = 0.0;
    if(hrs > 40){
        //Subtract hours worked -  40
        overtime = hrs - 40.00;
        overtimeG = pr * 1.5;
        overtimeG = overtimeG * overtime;
        gross = (40.0 * pr) + overtimeG;
        }
        else{
            gross = ((float)hrs) * pr;
        }
    return (float)gross;
}
