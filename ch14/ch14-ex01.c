/*  Chapter 14
    Exercise 1  */

#include <stdio.h>

typedef int (*FunctionPtr) (void);

int function(void){
    return 15;
}

int main(void){

    int function(void);

    printf("Program to define a type (typedef)\n");
    printf("----------------------------------\n");

    FunctionPtr fnPtr = function;

    printf("Value of the function: %i\n", fnPtr());

    printf("----------------------------------\n");
    
    return 0;
}