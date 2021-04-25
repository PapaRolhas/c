/*  Chapter 10
    Exercise 6  */

#include <stdio.h>

void removeString(char text[], int start, int n){

    int i;

    for(i = 0; text[i] != '\0'; i++){
        if(i >= start && i < start + n){
            text[i] = text[i+n];
        }
        else if(i >= start + n)
            text[i] = text[i+n];
    }
}

int main(void){

    void removeString(char text[], int start, int n);
    char text[] = "the wrong son";
    int start = 4;
    int n = 6;

    printf("Program to remove a number of characters from a string.\n");
    printf("-------------------------------------------------------\n");

    printf("Original string: %s.\n", text);

    removeString(text, start, n);

    printf("String after removing: %s.\n", text);

    printf("-------------------------------------------------------\n");

    return 0;
}