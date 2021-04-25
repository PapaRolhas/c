/*  Chapter 4
    Exercise 4  */

#include <stdio.h>

int main(void){

    // Celsius degrees
    float C = 27.0;
    // Fahrenheit degrees
    float F;

    // Conversion
    F = (C - 32) / 1.8;

    // Display result
    printf("%f (C) = %f (F)", C, F);

    return 0;
}