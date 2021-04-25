/*  Chapter 8
    Exercise 13 */

#include <stdio.h>

void sort(int a[], int n, char order){
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
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                     44, -3, -9, 12, 17, 22, 6, 11};
    void sort(int a[], int n, char order);
    char order;

    printf("The array before the sort:\n");

    for(i = 0; i < 16; i++){
        printf("%i  ", array[i]);
    }

    printf("\n\nChoose descending (D) or ascending (A) order: ");
    scanf("%c", &order);

    if(order != 'D' && order != 'A'){
        printf("Sort order wrong. order must be D or A");
        return -1;
    }
        
    sort(array, 16, order);

    printf("\nThe array after the sort:\n");

    for(i = 0; i < 16; i++){
        printf("%i  ", array[i]);
    }

    printf("\n");

    return 0;
}