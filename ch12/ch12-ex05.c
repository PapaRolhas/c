/*  Chapter 12
    Exercise 5  */

#include <stdio.h>

int bit_test(unsigned int value, int n);
unsigned int bit_set(unsigned int value, int n);
int int_size(void);

int bit_test(unsigned int value, int n){

    unsigned int mask = 0x1;

    if( n < 0 || n > int_size()-1)
        return -1;

    value = value >> n & mask;

    if(value == 0x1)
        return 1;
    else
        return 0;
}

unsigned int bit_set(unsigned int value, int n){

    if( n < 0 || n > int_size()-1)
        return -1;

    unsigned int mask = 0x1;

    value = value | (mask << n);

    return value;
}

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

    unsigned int value = 0x0f0f0f0f;
    int pos = 3;

    printf("Program to check if a position of an int has a value 1 and to set a position in an int to 1\n");
    printf("-------------------------------------------------------------------------------------------\n");

    printf("Value: %x\n", value);
    printf("Position %d is one ? %d\n", pos, bit_test(value, pos));

    printf("Original value: %x\n", value);
    printf("Added bit in position %d. Value: %x\n", pos+1, bit_set(value,pos+1));

    printf("-------------------------------------------------------------------------------------------\n");

    return 0;
}