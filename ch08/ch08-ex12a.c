/*  Chapter 8
    Exercise 12a    */

#include <stdio.h>

void transposeMatrix(int a[4][5], int b[5][4]){

    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 5; column++){
            b[column][row] = a[row][column];
        }
    }
}

int main(void){

    void transposeMatrix(int a[4][5], int b[5][4]);
    int  transposedMatrix[5][4], sampleMatrix[4][5] = {
        {1,    2,    3,    4,    5},
        {10,   20,   30,   40,   50},
        {100,  200,  300,  400,  500},
        {1000, 2000, 3000, 4000, 5000}
    };

    printf("Program to transpose a matrix\n");
    printf("-----------------------------\n");
    printf("\nSample matrix: \n");

    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 5; column++){
            printf("%-6i", sampleMatrix[row][column]);
        }
        printf("\n");
    }

    transposeMatrix(sampleMatrix, transposedMatrix);

    printf("\nTransposed matrix: \n");

    for(int row = 0; row < 5; row++){
        for(int column = 0; column < 4; column++){
            printf("%-6i", transposedMatrix[row][column]);
        }
        printf("\n");
    }
    printf("-----------------------------\n");

    return 0;
}