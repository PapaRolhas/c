/*  Chapter 8
    Exercise 7  */

#include <stdio.h>

long int x_to_the_n(int x, int n){

    long int result = 1;

    for(int i = 1; i <= n; i++){
        result = result * x;
    }

    return result;
}

int main(void){

    long int x_to_the_n(int x, int n);
    int x, n, result;

    printf("x to the n program.\n\nValue of x: ");
    scanf("%i", &x);
    printf("Value of n: ");
    scanf("%i", &n);

    result = x_to_the_n(x, n);

    printf("%i to the %i is %i", x, n, result);

    return 0;
}