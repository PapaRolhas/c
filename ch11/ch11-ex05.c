/*  Chapter 11
    Exercise 5  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
    struct entry *previous;
};

int main(void){

    struct entry n1, n2, n3, n4;
    struct entry *ptrStart = &n1;
    struct entry *ptrEnd = &n4;

    n1.value    = 1;
    n1.next     = &n2;
    n1.previous = (struct entry *) 0;
     
    n2.value    = 2;
    n2.next     = &n3;
    n2.previous = &n1;

    n3.value    = 3;
    n3.next     = &n4;
    n3.previous = &n2;

    n4.value    = 4;
    n4.next     = (struct entry *) 0;
    n4.previous = &n3;

    printf("Program to create a double linked list.\n");
    printf("---------------------------------------\n");

    printf("From start to end: ");
    while(ptrStart != (struct entry *) 0){
        printf("%i  ", (*ptrStart).value);
        ptrStart = (*ptrStart).next;
    }
    printf("\n");

    printf("From end to start: ");
    while(ptrEnd != (struct entry *) 0){
        printf("%i  ", (*ptrEnd).value);
        ptrEnd = (*ptrEnd).previous;
    }

    printf("\n---------------------------------------\n");

    return 0;
}