/*  Chapter 12
    Exercise 4  */

#include <stdio.h>

unsigned int rotate(unsigned int value, int n){
    unsigned int result, bits;
    int int_size(void);

    if(n > 0)
        n = n % int_size();
    else
        n = -(-n % int_size());
    
    if(n == 0)
        result = value;
    else if(n > 0){
        bits   = value >> (int_size() - n);
        result = value << n | bits; 
    }
    else{
        n      = -n;
        bits   = value << (int_size() - n);
        result = value >> n | bits;  
    }

    return result;
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

    unsigned int rotate(unsigned int value, int n);
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

    printf("Program to rotate an an unsigned int.\n");
    printf("-------------------------------------\n");

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    printf("-------------------------------------\n");

    return 0;
}