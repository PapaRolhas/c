/*  Chapter 11
    Exercise 2  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *addEntry, struct entry *ptr){

    while((*ptr).next != (struct entry *) 0){
        ptr = (*ptr).next;
    }
    
    (*ptr).next = addEntry;
    (*(*ptr).next).value = (*addEntry).value; 

}

int main(void){

    void insertEntry(struct entry *addEntry, struct entry *ptr);    
    struct entry n1, n2, n3;
    struct entry *ptr;
    struct entry addEntry;
    int addValue;

    n1.value = 1;
    n1.next  = &n2;

    n2.value = 2;
    n2.next  = &n3;

    n3.value = 3;
    n3.next  = (struct entry *) 0;

    printf("Program to inser an entry into a linked list.\n");
    printf("---------------------------------------------\n");
    printf("Enter an integer to insert into the linked list: ");
    scanf("%i", &addValue);

    (addEntry).value = addValue;
    (addEntry).next  = (struct entry *) 0;

    printf("Linked list values before inserting: \n");
    ptr = &n1;
    while(ptr != (struct entry *) 0){
        printf("%i  ", (*ptr).value);
        ptr = (*ptr).next;
    }

    ptr = &n1;
    insertEntry(&addEntry, ptr);

    printf("\nLinked list values after inserting: \n");

    ptr = &n1;
    while(ptr != (struct entry *) 0){
        printf("%i  ", (*ptr).value);
        ptr = (*ptr).next; 
    }
    
    printf("\n---------------------------------------------\n");
    
    return 0;
}