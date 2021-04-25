/*  Chapter 8
    Exercise 14 - 12a   */

#include <stdio.h>

int a[4][5] = {
        {1,    2,    3,    4,    5},
        {10,   20,   30,   40,   50},
        {100,  200,  300,  400,  500},
        {1000, 2000, 3000, 4000, 5000}
    };
int b[5][4];

void transposeMatrix(void){

    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 5; column++){
            b[column][row] = a[row][column];
        }
    }
}

int main(void){

    void transposeMatrix(void);

    printf("Program to transpose a matrix\n");
    printf("-----------------------------\n");
    printf("\nSample matrix: \n");

    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 5; column++){
            printf("%-6i", a[row][column]);
        }
        printf("\n");
    }

    transposeMatrix();

    printf("\nTransposed matrix: \n");

    for(int row = 0; row < 5; row++){
        for(int column = 0; column < 4; column++){
            printf("%-6i", b[row][column]);
        }
        printf("\n");
    }
    printf("-----------------------------\n");

    return 0;
}