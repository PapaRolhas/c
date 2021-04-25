/*  Chapter 8
    Exercise 14 - 11    */

#include <stdio.h>

int array[10];
int n = 10;

int arraySum(void){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + array[i];
    }

    return sum;
}

int main(void){

    int arraySum(void);
    int result;   

    printf("Function to return the sum of the elements in an arrray\n");
    printf("-------------------------------------------------------\n");
    printf("Enter the values in the array (n=%i): \n", n);

    for(int i = 0; i < n; i++){
        printf("array[%i] = ", i);
        scanf("%i", &array[i]);
    }

    result = arraySum();

    printf("\nSum of the array: %i\n", result); 
    printf("-------------------------------------------------------\n");
    
    return 0;
}