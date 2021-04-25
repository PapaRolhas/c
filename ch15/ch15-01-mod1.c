/*  Page 340
    mod1.c  */

#include <stdio.h>

double x;
static double result;

static void doSquare(void){
    
    double square(void);
    
    x = 2.0;
    result = square();
}

int main(void){

    printf("Program to calculate the square of a number with modules.\n");
    printf("---------------------------------------------------------\n");

    doSquare();
    printf("%g\n", result);

    printf("---------------------------------------------------------\n");

    return 0;
}