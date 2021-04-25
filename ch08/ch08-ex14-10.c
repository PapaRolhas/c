/*  Chapter 8
    Exercise 14 - 10    */

#include <stdio.h>

int gNumber;

int prime(void){
    
    int isPrime = 1;

    for(int i = 2; i < gNumber - 1; i++){
        if(gNumber % i == 0){
            isPrime = 0;
            return isPrime;
        }
    }

    return isPrime;
}

int main(void){

    int prime(void);

    printf("Program to check if a number is prime.\n");
    printf("--------------------------------------\n");
    printf("Enter a number: ");
    scanf("%i", &gNumber);

    if(prime())
        printf("The number %i is prime.\n", gNumber);
    else
        printf("The number %i is not prime.\n", gNumber);
    
    return 0;
}