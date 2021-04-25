/*  Chapter 4
    Exercise 6  */

#include <stdio.h>
// "To the power" library
#include <math.h>

int main(void){

    float x = 2.55;
    
    printf("y(x) = %f", 3 * pow(x, 3) - 5 * pow(x, 2) + 6);

    return 0;
}