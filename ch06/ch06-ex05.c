/*  Chapter 6
    Exercise 5  */

#include <stdio.h>

int main(void){
    
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    _Bool isNegative = 0;

    if(number < 0){
        isNegative = 1;
        number = -number;
    }

    do{
        right_digit = number % 10;
        number = number / 10;

        printf("%i", right_digit);
    }while(number != 0);
    
    if(isNegative)
        printf("-");

    printf("\n");

    return 0;
}