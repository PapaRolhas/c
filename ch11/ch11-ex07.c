/*  Chapter 11
    Exercise 7  */

#include <stdio.h>

void sort(int *ptr, int n){
    
    int i, j;
    int tmp;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(*(ptr+j) < *(ptr+i)){
                tmp = *(ptr+j);
                *(ptr+j) = *(ptr+i);
                *(ptr+i) = tmp;
            }
        }
    }
}

int main(void){

    void sort(int *ptr, int n);

    int list[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                44, -3, -9, 12, 17, 22, 6, 11};
    int n = 16;
    int *ptr = list;    
    int *listEnd = list + n;

    printf("Program to sort with pointers.\n");
    printf("------------------------------\n");

    printf("List before sort: \n");
    for(int i = 0; i < n; i++){
        printf("%i  ", *(ptr+i));
    }
    printf("\n");

    sort(ptr, n);

    printf("List after sort: \n");
    for(ptr = list; ptr < listEnd; ptr++){
        printf("%i  ", *(ptr));
    }

    printf("\n------------------------------\n");

    return 0;
}