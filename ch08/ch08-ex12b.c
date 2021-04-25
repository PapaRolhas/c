/*  Chapter 8
    Exercise 12b    */

#include <stdio.h>

void transposeMatrix(int nRows, int nCols, int a[nRows][nCols], int b[nCols][nRows]){
    
    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            b[column][row] = a[row][column];
        }
    }

}

int main(void){

    void transposeMatrix(int nRows, int nCols, 
                        int a[nRows][nCols], int b[nCols][nRows]);
    int nRows, nCols;

    printf("Program to transpose a variable-length matrix.\n");
    printf("----------------------------------------------\n");
    printf("Matrix rows: \n");
    scanf("%i", &nRows);
    printf("Matrix columns: \n");
    scanf("%i", &nCols);

    int sampleMatrix[nRows][nCols];
    int transposedMatrix[nCols][nRows];

    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            printf("array[%i][%i] = ", row, column);
            scanf("%i", &sampleMatrix[row][column]);
        }
    }

    printf("\nSample matrix: \n");

    for(int row = 0; row < nRows; row++){
        for(int column = 0; column < nCols; column++){
            printf("%-4i", sampleMatrix[row][column]);
        }
        printf("\n");
    }
    printf("\n");

    transposeMatrix(nRows, nCols, sampleMatrix, transposedMatrix);

    printf("Transposed matrix: \n");

    for(int row = 0; row < nCols; row++){
        for(int column = 0; column < nRows; column++){
            printf("%-4i", transposedMatrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}