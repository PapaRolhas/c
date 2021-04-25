/*  Chapter 12
    Exercise 7  */

#include <stdio.h>

unsigned int bitpat_get(unsigned int x, int start, int n){

    int int_size(void);
    
    unsigned int mask = 0x01;

    if(n < 0 || n > 31){
        printf("\nInvalid count.\n");
        return -1;
    }

    if(start < 0 || start > 31){
        printf("\nInvalid start position.\n");
        return -1;
    }

    if(start + n > 32){
        printf("\nInvalid count plus start position.\n");
        return -1;
    }

    for(int i=0; i < n-1; i++){
        mask = mask << 1;
        mask = mask | 0x01;
    }

    x = (x >> (int_size() - (start + n ))) & mask;

    return x;
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

    unsigned int bitpat_get(unsigned int x, int start, int n);
    
    unsigned int x = 0x00ffabcd;
    int start = 8;
    int n     = 21;

    printf("Program to extract set of bits from a uint.\n");
    printf("-------------------------------------------\n");

    printf("Original value: %x\nExtraction: %x\n", x, bitpat_get(x, start, n));

    printf("-------------------------------------------\n");

    return 0;
}