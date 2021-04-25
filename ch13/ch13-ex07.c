/*  Chapter 13
    Exercise 7  */

#include <stdio.h>

#define IS_LOWER_CASE(x)    ( (x)>='a' && (x)<='b' )
#define IS_UPPER_CASE(x)    ( (x)>='A' && (x)<='B' )
#define IS_ALPHABETIC(x)    ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )

void pCharIsAlphabetic(char c){

    if(IS_ALPHABETIC(c))
        printf("Char \'%c\' is alphabetic.\n", c);
    else
        printf("Char \'%c\' is not alphabetic.\n", c);
}

int main(void){
    
    void pCharIsAlphabetic(char c);

    printf("Program to check if a character is alphabetic using define.\n");
    printf("-----------------------------------------------------------\n");

    char c1 = 'a', c2 = 'B', c3 = '3';

    pCharIsAlphabetic(c1);
    pCharIsAlphabetic(c2);
    pCharIsAlphabetic(c3);

    printf("-----------------------------------------------------------\n");

    return 0;
}