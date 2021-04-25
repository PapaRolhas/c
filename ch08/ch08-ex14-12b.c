/*  Chapter 8
    Exercise 14 - 12b   */

#include <stdio.h>

int nRows = 3, nCols = 3;
int a[3][3];
int b[3][3];

void transposeMatrix(void){
    
    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            b[column][row] = a[row][column];
        }
    }

}

int main(void){

    void transposeMatrix(void);

    printf("Program to transpose a variable-length matrix.\n");
    printf("----------------------------------------------\n");

    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            printf("array[%i][%i] = ", row, column);
            scanf("%i", &a[row][column]);
        }
    }

    printf("\nSample matrix: \n");

    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            printf("%-4i", a[row][column]);
        }
        printf("\n");
    }
    printf("\n");

    transposeMatrix();

    printf("Transposed matrix: \n");

    for(int row = 0; row < nCols; row++){
        for(int column = 0; column < nRows; column++){
            printf("%-4i", b[row][column]);
        }
        printf("\n");
    }

    return 0;
}