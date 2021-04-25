/*  Chapter 13
    Exercise 3  */

#include <stdio.h>

#define MIN(a,b) ( (a) < (b) ? a : b)

int main(void){

    printf("Program to return min of two values using \"define\".\n");
    printf("---------------------------------------------------\n");

    int a, b;

    printf("First number (int): ");
    scanf("%d", &a);
    printf("Second number (int): ");
    scanf("%d", &b);

    printf("The minimum value is: %d\n", MIN(a,b));

    printf("---------------------------------------------------\n");

    return 0;
}