/*  Chapter 8
    Exercise 14 - 13    */

#include <stdio.h>

int a[16] = {34, -5, 6, 0, 12, 100, 56, 22,
             44, -3, -9, 12, 17, 22, 6, 11};
int  n = 16;
char order;

void sort(void){
    int i, j, tmp;

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j] && order == 'A'){
                tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } else if(a[i] < a[j] && order == 'D'){
                tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(void){

    int i;
    void sort(void);

    printf("The array before the sort:\n");

    for(i = 0; i < 16; i++){
        printf("%i  ", a[i]);
    }

    printf("\n\nChoose descending (D) or ascending (A) order: ");
    scanf("%c", &order);

    if(order != 'D' && order != 'A'){
        printf("Sort order wrong. order must be D or A");
        return -1;
    }
        
    sort();

    printf("\nThe array after the sort:\n");

    for(i = 0; i < 16; i++){
        printf("%i  ", a[i]);
    }

    printf("\n");

    return 0;
}