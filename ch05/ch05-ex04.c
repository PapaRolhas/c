/*  Chapter 5 
    Exercise 4  */

#include <stdio.h>

int main(void){

    int i, count, factorial;

    printf("Factorial of a number\n");
    printf("Number         Result\n");
    printf("---------------------\n");

    for(count = 1; count <= 10; count++){
        factorial = 1;
        for(i = 1; i <= count; i++ ){
            factorial = factorial * i;
        }
        
        printf(" %2i!         %7i\n", count, factorial);
    }

    return 0;
}