/*  Chapter 13
    Exercise 4  */

#include <stdio.h>

#define MAX(a,b)    ( (a)>(b) ? a : b )

#define MAX3(a,b,c) ( MAX(MAX(a,b),c) )

int main(void){

    printf("Program to return the max of three numbers using \"define\".\n");
    printf("---------------------------------------------------\n");

    int a, b, c;

    printf("First number: ");
    scanf("%d", &a);

    printf("Second number: ");
    scanf("%d", &b);

    printf("Third number: ");
    scanf("%d", &c);

    printf("The maximum is: %d\n", MAX3(a,b,c));

    printf("---------------------------------------------------\n");
    
    return 0;
}