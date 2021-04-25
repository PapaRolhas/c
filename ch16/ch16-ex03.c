/*  Chapter 16
    Exercise 3  */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int c;

    char nin[64], nout[64];

    FILE *fin, *fout;


    printf("Program to copy a file to another replacing lowercase to uppercase.\n");
    printf("-------------------------------------------------------------------\n");

    printf("Input file: \n");
    scanf("%s", &nin);
    printf("INPUT FILE NAME: %s", nin); 
    printf("Output file: \n");
    scanf("%s", &nout);

    if( (fin = fopen(nin, "r")) == NULL ){
        printf("Can't open '%s' for reading.\n", nin);
        exit(EXIT_FAILURE);
    }

    if( (fout = fopen(nout, "w")) == NULL ){
        printf("Can't open '%s' for writting.\n", nout);
        exit(EXIT_FAILURE);
    }

    while( (c = getc(fin)) != EOF ){
        if( (c >= 'a') && (c <= 'z') )
            c = c - 'a' + 'A';
        putc(c, fout);
    }

    printf("-------------------------------------------------------------------\n");

    return 0;
}