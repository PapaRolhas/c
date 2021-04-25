/*  Chapter 12
    Exercicse 8 */

#include <stdio.h>

int int_size(void);

void bitpat_set(unsigned int *pX, unsigned int value, int start, int n){

    if(n < 0 || n > 31){
        printf("\nError: \'n\' must be in range.\n");
        return;
    }

    if(start < 0 || start > 31){
        printf("\nError: \'start\' must be in range.\n"); 
        return;
    }

    if(start + n > 32){
        printf("\nError: \' start + n \' must be in range.\n");
        return;
    }

    unsigned int mask = 0xffffffff;

    for(int i = 0; i < n-1; i++){
        mask = mask << 1;
        mask = mask & 0xfffffffe;
    }

    for(int i = 0; i < (int_size()-(start+n)); i++){
        mask  = mask << 1;
        mask  = mask | 0x01;
        value = value << 1;
        value = value & 0xfffffffe; 
    }

    *pX = (*pX & mask) | value;
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

    void bitpat_set(unsigned int *pX, unsigned int value, int start, int n);  

    unsigned int tmp = 0x00abcdef;
    unsigned int *pX = &tmp;
    int value = 7; 
    int start = 0;
    int n     = 4;

    printf("Program to set a specified set of bits to a particular value.\n");
    printf("------------------------------------------------------------.\n");

    printf("Original value: %x\n", *pX);

    bitpat_set(pX, value, start, n);

    printf("Modified value: %x\n", *pX);

    printf("------------------------------------------------------------.\n");

    return 0;
}