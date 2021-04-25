/*  Chapter 5
    Exercise 3  */

#include <stdio.h>

int main(void){

    int n = 0, triangularNumber = 50;

    printf("T. Number    dots\n");
    printf("-----------------\n");
    

    for(int i = 5; i <= triangularNumber; i = i + 5){
        n = i * (i + 1) / 2;
        printf(" %2i          %4i\n", i, n);
        n = 0;
    }

    return 0;
}