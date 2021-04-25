/*  Chapter 8
    Exercise 8  */

#include <stdio.h>

// Function to calculate the absolute value of a number

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

// Function to solve a quadratic equation

void solveQuadraticEquation(int a, int b, int c){

    float result1, result2;

    if(b * b - 4 * a * c < 0){
        printf("Roots are imaginary.\n");
    }
    else{
        result1 = (-b + squareRoot(b * b - 4 * a * c, 0.0001)) / (2 * a);
        result2 = (-b - squareRoot(b * b - 4 * a * c, 0.0001)) / (2 * a);
    }

    printf("x1 = %4.4f\nx2 = %4.4f\n", result1, result2);
}

int main(void){

    void  solveQuadraticEquation(int a, int b, int c);
    float absoluteValue(float x);
    float squareRoot(float x, float epsilon);

    int a, b, c;

    printf("Program to solve quadratic equation.\n");
    printf("------------------------------------\n");
    printf("Enter the values of a, b and c.\n");
    scanf("%i %i %i", &a, &b, &c);
    printf("------------------------------------\n");

    solveQuadraticEquation(a, b, c);

    return 0;
}