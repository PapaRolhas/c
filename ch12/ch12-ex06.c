/*  Chapter 12
    Exercise 6  */

#include <stdio.h>

long int bitpat_search(unsigned int source, unsigned int pattern, int n){

    int int_size(void);
    int idx, count = 0;
    unsigned int mask = 0x1;

    if(n < 0 || n > 31)
        return -2;

    idx = int_size()-n;

    for(int i = 0; i < n-1; i++){
        mask = mask << 1;
        mask = mask | 0x1;
    }

    printf("\n\nMask: %x\n\n", mask);

    while(idx > 0){
        if(((source >> idx & mask) ^ pattern) == 0x0)
            return count;
        count++;
        idx--;
    }

    return -1;
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

    long int bitpat_search(unsigned int source, unsigned int pattern, int n);

    unsigned int source  = 0xabcdef01;
    unsigned int pattern = 0xf; 
    int n = 4;

    printf("Function to find parttern in an uint.\n");
    printf("-------------------------------------\n");

    int found = bitpat_search(source, pattern, n);

    printf("Found: %d\n", found);

    printf("-------------------------------------\n");

    return 0;
}