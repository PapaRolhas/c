/*  Chapter 13
    Exercise 11 */

#include <stdio.h>
#include <ctype.h>

void pCharType(char c){

    if(isalpha(c)){
        if(isupper(c))
            printf("Char \'%c\' is alphabetic uppercase.\n", c);
         else
            printf("Char \'%c\' is alphabetic lowercase.\n", c);
    }
    else if(isdigit(c))
        printf("Char \'%c\' is a digit.\n", c);
    else
        printf("Char \'%c\' is a special character.\n", c);
}

int main(void){

    void pCharType(char c);

    printf("Program to check if char is digit using <ctype.h>.\n");
    printf("--------------------------------------------------\n");

    char c1 = 'a', c2 = 'B', c3 = '3', c4 = '!';

    pCharType(c1);
    pCharType(c2);
    pCharType(c3);
    pCharType(c4);

    printf("--------------------------------------------------\n");
    
    return 0;
}