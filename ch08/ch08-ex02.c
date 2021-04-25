/*  Chapter 8
    Exercise 2  */

#include <stdio.h>

int calculateTriangularNumber(int n){
    int i, triangularNumber = 0;

    for(i = 1; i <= n; i++){
        triangularNumber += i;
    }

    return triangularNumber; 
}

int main(void){

    int calculateTriangularNumber(int n);
    
    int n = 10;
    printf("Triangular number %i is %i\n", n, calculateTriangularNumber(n));
    
    n = 20;
    printf("Triangular number %i is %i\n", n, calculateTriangularNumber(n));
    
    n = 50;
    printf("Triangular number %i is %i\n", n, calculateTriangularNumber(n));

    return 0;
}