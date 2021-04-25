/*  Chapter 11
    Exercise 4  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
};

void removeEntry(struct entry *ptr){
    
    (*ptr).next = (*(*ptr).next).next;  //  (*ptrTmp).next; 
}

int main(void){

    void removeEntry(struct entry *ptr);
    struct entry n0, n1, n2, n3, n4, n5;
    struct entry *ptrStart, *ptr2remove;
    struct entry *tmp = &n1;

    n1.value = 1;
    n1.next  = &n2;

    n2.value = 2;
    n2.next  = &n3;

    n3.value = 3;
    n3.next  = &n4;

    n4.value = 4;
    n4.next  = &n5;

    n5.value = 5;    
    n5.next  = (struct entry *) 0;

    ptrStart = tmp; 
    
    printf("Program to remove an entry from a linked list.\n");
    printf("----------------------------------------------\n");

    printf("Linked list before removing entry: \n");
    while(ptrStart != (struct entry *) 0){
        printf("%i  ", (*ptrStart).value);
        ptrStart = (*ptrStart).next;
    }

    ptr2remove = &n0;

    if(ptr2remove == &n0){
        tmp = &n2;
    }
    else
        removeEntry(ptr2remove);

    printf("\nLinked list after removing entry: \n");
    ptrStart = tmp;
    while(ptrStart != (struct entry *) 0){
        printf("%i  ", (*ptrStart).value);
        ptrStart = (*ptrStart).next;
    }

    printf("\n----------------------------------------------\n");

    return 0;
}