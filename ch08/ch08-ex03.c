/*  Chapter 8
    Exercise 3  */

#include <stdio.h>
#include <math.h>

// Funciton to calculate the absolute value of a number

float absoluteValue(float x){
    if(x < 0)
        x = -x;

    return x;
}

// Function to compute the square root of a number

float squareRoot(float x, float epsilon){
    float guess   = 1.0;

    while(absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
    
    return guess;

}

int main(void){

    int n = 5;
    float epsilon;

    for(int i = 1; i <= n; i++){
        epsilon = 10 / pow(10, i);
        printf("epsilon = %6.6f  # squareRoot (2.0) = %f\n", epsilon, squareRoot(2.0, epsilon));
    }
        
    return 0;
}