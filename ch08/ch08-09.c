// Function to find the minimum value in an array

#include <stdio.h>

int minimum(int values[10]){
    
    int minValue, i;

    minValue = values[0];

    for(i = 1; i < 10; i++){
        if(values[i] < minValue)
            minValue = values[i];
    }

    return minValue;
}

int main(void){

    int scores[10], i, minScore;
    int minimum(int values[10]); // This tells the compiler that minimum returns an int and takes an array of 10 integers. Remember, it’s not necessary to make this declaration here because the minimum function is defined before it’s called from inside main.

    printf("Enter 10 scores\n");

    for(i = 0; i < 10; i++){
        scanf("%i", &scores[i]);
    }

    minScore = minimum(scores);
    printf("\nMinimum score is %i\n", minScore);

    return 0;
}