/*  Chapter 4
    Exercise 8  */

#include <stdio.h>

int main(void){

    int i, j;

    i = 365;
    j = 7;
    printf("%i and %i: %i\n", i, j, i + j - i % j); 

    i = 12258;
    j = 23;
    printf("%i and %i: %i\n", i, j, i + j - i % j);

    i = 996;
    j = 4;
    printf("%i and %i: %i\n", i, j, i + j - i % j);

    return 0;
}