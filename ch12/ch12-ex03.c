/*  Chapter 12
    Exercise 3  */

#include <stdio.h>

int int_size(void){

    int value = ~0;
    int countBits = 0;

    while(value != 0){
        value = value << 1;
        countBits++;
    }

    return countBits;
}

int main(void){

    int int_size(void);
    int value = 0x0ffffff1;

    printf("Program to check number of bits contained in an int.\n");
    printf("----------------------------------------------------\n");

    int sizeOfInt = int_size();

    printf("Size of int: %d bits.\n", sizeOfInt);

    printf("----------------------------------------------------\n");
    
    return 0;
}