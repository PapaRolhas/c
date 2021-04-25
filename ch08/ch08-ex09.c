/*  Chapter 8
    Exercise 9  */

#include <stdio.h>

// Function to get the greatest common divisor of two nonnegative numbers

int gcd(int u, int v){
    int temp;

    while(v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

// Function to get the least common multiple of two positive integers

int lcm(int u, int v){

    int result;

    if(u >= 0 && v >= 0){
        result = u * v / gcd(u, v);        
    }       
    else{
        printf("Error: u or v is negative.\n");
        return -1;
    }

    return result;
}

int main(void){

    int lcm(int u, int v);
    int gcd(int u, int v);
    int u, v, result;

    printf("Program to check the lcm of two positive integers.\n");
    printf("--------------------------------------------------\n");
    printf("Enter two integers: \n");
    scanf("%i %i", &u, &v);
    printf("--------------------------------------------------\n");

    result = lcm(u, v);

    printf("The lcm of %i and %i is %i", u, v, result);

    return 0;
}