/*  Chapter 13
    Exercise 6  */

#include <stdio.h>

#define IS_UPPER_CASE(x) ( (x) >= 'A' && (x) <= 'Z' )

void pCharIsUpper(char l){

    if(IS_UPPER_CASE(l))
        printf("Char: \'%c\' is uppercase.\n", l);
    else
        printf("Char: \'%c\' is lowercase.\n", l);
}

int main(void){

    void pCharIsUpper(char l);

    printf("Program to check if a letter is uppercase using define.\n");
    printf("-------------------------------------------------------\n");

    char l1 = 'a';
    char l2 = 'B';

    pCharIsUpper(l1);
    pCharIsUpper(l2);

    printf("-------------------------------------------------------\n");

    return 0;
}