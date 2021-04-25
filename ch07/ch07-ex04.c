/*  Chapter 7
    Exercise 4  */

#include <stdio.h>

int main(void){

    float array[10];
    int   i;
    float sum = 0;

    printf("Enter 10 floating-point numbers: \n");

    for(i = 0; i < 10; i++){
        scanf("%f", &array[i]);
        sum = sum + array[i];
    }

    printf("Average of the array: %.3f", sum / 10);

    return 0;
}