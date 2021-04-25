/*  Chapter 5
    Exercise 2  */

#include <stdio.h>
#include <math.h>

int main(void){

    printf("  n     n^2\n");
    printf("------------\n");

    int result;

    for(int i = 1; i <= 10; i++){
        result = pow(i, 2);
        printf(" %2i    %3i\n", i, result);
    }

    return 0;
}