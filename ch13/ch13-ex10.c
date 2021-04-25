/*  Chapter 13
    Exercise 10 */

#include <stdio.h>

#define printint(n) printf("%i\n", x ## n)
#define X(n,i)      ( (x ## n) = i )

int main(void){

    printf("Program to print from x1-x100.\n");
    printf("------------------------------\n");

    int xn;

    for(int i=1; i<101; i++){
        X(n,i);
        printint(n);
    }

    printf("------------------------------\n");

    return 0;
}