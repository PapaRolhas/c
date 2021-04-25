/*  Chapter 8
    Exercise 11 */

#include <stdio.h>

int arraySum(int array[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + array[i];
    }

    return sum;
}

int main(void){

    int arraySum(int array[], int n);
    int n, result;   

    printf("Function to return the sum of the elements in an arrray\n");
    printf("-------------------------------------------------------\n");
    printf("How many elements have your array ? ");
    scanf("%i", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        printf("array[%i] = ", i);
        scanf("%i", &array[i]);
    }

    result = arraySum(array, n);

    printf("\nSum of the array: %i\n", result); 
    printf("-------------------------------------------------------\n");
    
    return 0;
}