/*  Chapter 9
    Exercise 10 */

#include <stdio.h>

int prime(int x){
    
    int isPrime = 1;

    for(int i = 2; i < x - 1; i++){
        if(x % i == 0){
            isPrime = 0;
            return isPrime;
        }
    }

    return isPrime;
}

int main(void){

    int prime(int x);
    int value;

    printf("Program to check if a number is prime.\n");
    printf("--------------------------------------\n");
    printf("Enter a number: \n");
    scanf("%i", &value);

    if(prime(value))
        printf("The number %i is prime.\n", value);
    else
        printf("The number %i is not prime.\n", value);
    
    return 0;
}