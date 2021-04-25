/*  Chapter 16
    Exercise 6  */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Program to display contents of a file 20 lines at time.\n");
    printf("-------------------------------------------------------\n");

    FILE *file;
    char c, file_name[] = "file3.txt";
    int lines = 0;

    if( (file = fopen(file_name, "r")) == NULL ){
        printf("Can't open '%s' to read.\n");
        exit(EXIT_FAILURE);
    }

    char f;
    while( (f = getchar()) != 'q' && c != EOF){
        lines = 0;
        while( (c = getc(file)) != EOF && lines < 20){
            printf("%c", c);
            if(c == '\n')
                lines++;
        }
    }

    printf("------------------------------------------------------\n");

    return 0;
}