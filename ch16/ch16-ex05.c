/*  Chapter 16
    Exercise 5  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    printf("Program to write column 'm' through 'n' of each line of a file.\n");
    printf("---------------------------------------------------------------\n");

    FILE * file;
    int c; 
    int m=0, column, n=0, row;

    char file_name[] = "copied.txt" ;

    file = fopen(file_name, "r");
    if(file == NULL){
        printf("Can't open '%s' file to read.\n");
        exit(EXIT_FAILURE);
    }

    printf("Write to column: ");
    scanf("%i", &column);
    printf("Write to row: ");
    scanf("%i", &row);

    while( (c = getc(file)) != EOF ){
        if(n < row){
            if(m < column){
                fprintf(stdout, "%c", c);
                m++;
                if(c == '\n'){
                    m = 0;
                    n++;
                }
            }
            else{
                if(c == '\n'){
                    m = 0;
                    n++;
                    fprintf(stdout, "%c", c);
                }
            }
        }
        else
            break;
    }

    fclose(file);

    printf("\n---------------------------------------------------------------\n");

    return 0;
}