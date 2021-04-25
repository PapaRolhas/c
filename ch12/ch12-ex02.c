/*  Chapter 12  
    Exercise 1  */

#include <stdio.h>

int main(void){

    int value1 = 0xffffffff;
    unsigned int value2 = 0xffffffff;

    printf("Program to check if my computer perform arithmetic or logical right shift\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Initial value (int): %x\n", value1);
    printf("Right shifted value (int): %x\n", value1 >> 1);    

    printf("\nInitial value (uint): %x\n", value2);
    printf("Right shifted value (uint): %x\n", value2 >> 1);

    printf("-------------------------------------------------------------------------\n");  

    return 0;
}