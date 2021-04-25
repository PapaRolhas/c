//  Program to illustrate pointers

#include <stdio.h>

int main(void){

    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);
    printf("int_pointer = %i, *int_pointer = %i\n", int_pointer, *int_pointer);

    return 0;
}