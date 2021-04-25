/*  Chapter 11
    Exercise 3  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *addEntry, struct entry *ptrStart){
    (*addEntry).next = ptrStart;
    ptrStart = addEntry;

    // printf("\n\n");
    // while(ptrStart != (struct entry *) 0){
    //     printf("%i  ", (*ptrStart).value);
    //     ptrStart = (*ptrStart).next;
    // }
    // printf("ptrStart = %i\n\n", ptrStart);
}

int main(void){

    void insertEntry(struct entry *addEntry, struct entry *ptrStart);
    struct entry addEntry;
    struct entry n1, n2, n3;
    struct entry *ptrStart;
    int addValue;

    n1.value = 1;
    n1.next  = &n2;
    
    n2.value = 2;
    n2.next  = &n3;

    n3.value = 3;
    n3.next  = (struct entry *) 0;

    ptrStart = &n1;

    printf("Program to insert a new entry into a linked list\n");
    printf("------------------------------------------------\n");

    printf("Enter a value to insert: ");
    scanf("%i", &addValue);

    printf("Linked list before inserting: \n");
    while(ptrStart != (struct entry *) 0){
        printf("%i  ", (*ptrStart).value);
        ptrStart = (*ptrStart).next;
    }

    (addEntry).value = addValue;
    (addEntry).next  = (struct entry *) 0;

    ptrStart = &n1;
    insertEntry(&addEntry, ptrStart);

    ptrStart = &addEntry;
    printf("\nLinked list after inserting: \n");
    while(ptrStart != (struct entry *) 0){
        printf("%i  ", (*ptrStart).value);
        ptrStart = (*ptrStart).next;
    }

    printf("\n------------------------------------------------\n");

    return 0;
}