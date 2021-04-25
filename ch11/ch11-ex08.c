/*  Chapter 11
    Exercise 8  */

#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
    struct entry *prev;
};

void sort3(struct entry *ptr){
    int i;
    int tmp;
    struct entry *head = ptr;

    for(i = 0; i < 2; i++){ 
        ptr = head;
        while((*ptr).next != (struct entry *) 0){
            if((*ptr).value > (*(*ptr).next).value){
                tmp = (*(*ptr).next).value;
                (*(*ptr).next).value = (*ptr).value;
                (*ptr).value = tmp;
            }
            ptr = (*ptr).next;
        }
    }
}

int main(void){

    void sort3(struct entry *ptr);
    struct entry n1, n2, n3;
    struct entry *ptr;

    n1.value = 100;
    n1.next  = &n2;
    n1.prev  = (struct entry *) 0;

    n2.value = 20;
    n2.next  = &n3;
    n2.prev  = &n1;

    n3.value = 3;
    n3.next  = (struct entry *) 0;
    n3.prev  = &n2;

    printf("Program to sort three integers with pointer.\n");
    printf("--------------------------------------------\n");

    printf("List before sorting: \n");
    ptr = &n1;
    while(ptr != (struct entry *) 0){
        printf("%i  ", (*ptr).value);
        ptr = (*ptr).next;
    }

    ptr = &n1;
    sort3(ptr);

    printf("\nList after sorting: \n");
    ptr = &n1;
    while(ptr != (struct entry *) 0){
        printf("%i  ", (*ptr).value);
        ptr = (*ptr).next;
    }

    printf("\n--------------------------------------------\n");
    
    return 0;
}