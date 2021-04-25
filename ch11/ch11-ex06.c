/*  Chapter 11
    Exercise 6  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
    struct entry *previous;
};

void insertEntry(struct entry *addEntry, struct entry *ptr){

    while((*ptr).next != (struct entry *) 0){
        ptr = (*ptr).next;
    }

    (*ptr).next = addEntry;
    (*(*ptr).next).value = (*addEntry).value;
}

void removeEntry(struct entry *remEntry){

    if((*remEntry).next == (struct entry *) 0){
        (*(*remEntry).previous).next = (struct entry *) 0;
    }
    else{
        (*(*remEntry).previous).next = (*remEntry).next;
        (*(*remEntry).next).previous = (*remEntry).previous;
    }   
}

void printEntries(struct entry *list){
    struct entry *tmp = list;
    
    while(list != (struct entry *) 0){
        printf("%i  ", (*list).value);
        list = (*list).next;
    }
    list = tmp;
}

int main(void){

    void insertEntry(struct entry *addEntry, struct entry *ptr);
    void removeEntry(struct entry *remEntry);
    void printEntries(struct entry *list);    
    struct entry n1, n2, n3, n4, addEntry;
    struct entry *remEntry, *ptrStart, *ptrHead = &n1;

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

    printf("Program to insert and remove entries from a doubly linked list.\n");
    printf("---------------------------------------------------------------\n");

    ptrStart = ptrHead; 
    printf("List before any change: \n");
    printEntries(ptrStart);

    // printf("\n&n1 = %i\n&n2 = %i\n&n3 = %i\n&n4 = %i\n&addEntry = %i\n&remEntry = %i\n&ptrStart =  %i\n&ptrHead = %i\n", &n1, &n2, &n3, &n4, &addEntry, &remEntry, &ptrStart, &ptrHead);

    (addEntry).value = 5;
    (addEntry).next  = (struct entry *) 0;
    (addEntry).previous = &n4;

    ptrStart = ptrHead; 
    insertEntry(&addEntry, ptrStart);

    ptrStart = ptrHead; 
    printf("\nList after inserting: \n");
    printEntries(ptrStart); 
    
    remEntry = &n3;

    if(remEntry == &n1)
        ptrHead = &n2;
    else{
        removeEntry(remEntry);
        ptrHead = &n1; 
    }

    ptrStart = ptrHead;
    printf("\nList after removing: \n");
    printEntries(ptrStart);

    printf("\n---------------------------------------------------------------\n");

    return 0;
}