/*  Chapter 7
    Exercise 7  */

#include <stdio.h>

int main(void){

    int   P[150];
    int   n = 150;
    int   i = 2, j = 0;

    for(i = 2; i < n; i++)
        P[i] = 0;

    for(i = 2; i < n; i++){
        if(P[i] == 0)
            printf("%i  ", i);
        
        for(j = 0; i * j < n; j++)
            P[i*j] = 1;
    }

    return 0;
}