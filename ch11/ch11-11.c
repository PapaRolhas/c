//  Function to sum the elements of an integer array

#include <stdio.h>

int arraySum(int array[], const int n){

    int sum = 0, *ptr;
    int * const arrayEnd = &array[0] + n;

    for(ptr = &array[0]; ptr < arrayEnd; ptr++){
        sum = sum + *ptr;
    }

    return sum;
}

int main(void){

    int arraySum(int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i.\n", arraySum(values, 10));

    return 0;
}