/*  Chapter 13
    Exercise 8  */

#include <stdio.h>

#define IS_LOWER_CASE(x)    ( (x)>='a' && (x)<='z' )
#define IS_UPPER_CASE(x)    ( (x)>='A' && (x)<='Z' )
#define IS_ALPHABETIC(x)    ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )
#define IS_DIGIT(x)         ( (x)>='0' && (x)<='9' )
#define IS_SPECIAL(x)       ( IS_ALPHABETIC(x) == 0 && IS_DIGIT(x) == 0 )

void pCharType(char c){

    if(IS_ALPHABETIC(c))
        printf("Char \'%c\' is alphabetic.\n", c);
    else if(IS_DIGIT(c))
        printf("Char \'%c\' is a digit.\n", c);
    else
        printf("Char \'%c\' is a special character.\n", c);
}

int main(void){

    void pCharType(char c);

    printf("Program to check if char is digit using define.\n");
    printf("-----------------------------------------------\n");

    char c1 = 'a', c2 = 'B', c3 = '3', c4 = '!';

    pCharType(c1);
    pCharType(c2);
    pCharType(c3);
    pCharType(c4);

    printf("-----------------------------------------------\n");
    
    return 0;
}
