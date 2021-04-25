/*  Chapter 11
    Exericse 9  */

#include <stdio.h>

void readLine(char *ptr){

    char c;

    do{
        c = getchar();
        (*ptr) = c;
        ptr = ptr+1;
    }while(c != '\n');
}

int main(void){
    
    void readLine(char *ptr);
    char line[81];
    char *ptr = line;
    int i;

    printf("Program to read line with pointer.\n");
    printf("----------------------------------\n");

    for(i = 0; i < 3; i++){
        readLine(ptr);
        printf("Read line #%i: \"", i);
        do{
            printf("%c", *ptr);
            ptr = ptr + 1;
        }while(*ptr != '\n');
        printf("\"\n");
    }

    printf("----------------------------------\n");

    return 0;
}