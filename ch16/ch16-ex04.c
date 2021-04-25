/*  Chapter 16
    Exercise 4  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

FILE * openFile_func(char name[], char op[]){

    FILE *file;

    if( (file = fopen(name, op)) == NULL ){
        if(op == "r")
            printf("Can't find '%s' to read.\n", name);
        else if(op == "w")
            printf("Can't find '%s' to write.\n2", name);
        else
            printf("Can't find '%s' file.", name);
        
        exit(EXIT_FAILURE);
    }

    return file;
}

void mergeLine(FILE *f1, FILE *f2){

    int c1, c2;

    bool f1EOF, f2EOF;

    while( true ){
        if( (c1 = getc(f1)) != EOF ){
            if( (c2 = getc(f2)) != EOF )
                fprintf(stdout, "%c%c", c1, c2);
            else
                fprintf(stdout, "%c", c1);
        }
        else{
            if( (c2 = getc(f2)) != EOF )
                fprintf(stdout, "%c", c2);
        }
        if( c1 == EOF && c2 == EOF)
            return;
    }
}

int main(void){

    FILE * openFile_func(char name[], char op[]);
    void mergeLine(FILE *f1, FILE *f2);

    printf("Program that merges lines alternately from two files.\n");
    printf("-----------------------------------------------------\n");

    char nf1[] = "file1.txt", nf2[] = "file2.txt";
    FILE *f1, *f2;

    f1 = openFile_func(nf1, "r");    
    f2 = openFile_func(nf2, "r");

    mergeLine(f1, f2);

    fclose(f1);
    fclose(f2);

    printf("\n-----------------------------------------------------\n");
    
    return 0;
}