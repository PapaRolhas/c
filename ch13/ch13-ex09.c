/*  Chapter 13
    Exercise 8  */

#include <stdio.h>

#define ABSOLUTE_VALUE(x) ( (x) >= 0 ? (x) : -(x) )

int main(void){

    printf("Program to compute absolute value using define.\n");
    printf("-----------------------------------------------\n");

    int value;

    printf("Insert value: ");
    scanf("%d", &value);

    printf("Absolute value of %d is: %d\n", value, ABSOLUTE_VALUE(value));

    printf("Absolute value o \"1-3\" is: %d\n", ABSOLUTE_VALUE(1-3));

    printf("-----------------------------------------------\n");

    return 0;
}