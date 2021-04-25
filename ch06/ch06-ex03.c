/*  Chapter 6
    Exercise 3  */

#include <stdio.h>

int main(void){

    int value1, value2;

    printf("Enter two integers: \n");
    scanf("%i %i", &value1, &value2);

    if(value2 == 0)
        printf("Division by zero.\n");
    else
    	printf("%i / %i = %.3f", value1, value2, (float) value1 / value2);

    return 0;
}