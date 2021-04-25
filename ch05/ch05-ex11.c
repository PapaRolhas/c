/*  Chapter 5
    Exercise 11 */

#include <stdio.h>

int main(void){

    int n, sum, number, digit;
    sum = 0;

    printf("What number do you want to know the sum of their digits ?\n");
    scanf("%i", &number);

    n   = number;
    sum = 0;
    while(number != 0){
        digit = number % 10;
        sum   = sum + digit;

        number = number / 10;
    }

    printf("The number %i has the following sum: %i", n, sum);

    return 0;
}