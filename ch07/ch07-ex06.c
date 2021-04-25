/*  Chapter 7
    Exercise 6  */

#include <stdio.h>

int main(void){

    int current, current_1, current_2, i;

    current_2 = 0;
    current_1 = 1;

    printf("%i\n%i\n", current_2, current_1);

    for(i = 2; i < 15; i++){
        current = current_1 + current_2;
        printf("%i\n", current);
        current_2 = current_1;
        current_1 = current;
    }

    return 0;
}