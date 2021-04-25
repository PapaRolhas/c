/*  Chapter 13 
    Exercise 5  */

#include <stdio.h>

#define SHIFT(value, n) ( n > 0 ? (value << n) : (value >> -n) )

int main(void){
    
    printf("Program to perform SHIFT function of Program 12.3.\n");
    printf("--------------------------------------------------\n");

    unsigned int value = 0x001;
    int n = 3;

    printf("Original value: %x\n", value);
    printf("Shifted value: %x\n", SHIFT(value,n));

    printf("--------------------------------------------------\n");

    return 0;
}