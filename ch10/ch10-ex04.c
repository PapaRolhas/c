/*  Chapter 3
    Exercise 4  */

#include <stdio.h>

//  Function to read a line of text from the terminal

void readLine(char buffer[]){

    char character;
    int i = 0;

    do{
        character = getchar();
        buffer[i] = character;
        i++;
    }while(character != '\n');

    buffer[i-1] = '\0';
}

//  Function to extract a portion of a character string

void substring(char source[], int start, int count, char result[]){
    
    int i;

    for(i = start; i < start+count; i++){
        if(source[i] == '\0'){
            result[i] = '\0';
            break;
        }
        else{
            result[i-start] = source[i]; 
        }
    }
}

int main(void){
    
    void substring(char source[], int start, int count, char result[]);
    void readLine(char text[]);
    char text[100] = "";
    char textResult[100] = "";
    int start, count;

    printf("Program to extract a portion of a string.\n");
    printf("-----------------------------------------\n");

    printf("Enter a string: ");
    readLine(text);
    printf("Start copying from: ");
    scanf("%i", &start);
    printf("How many characters to copy: ");
    scanf("%i", &count);

    substring(text, start, count, textResult);

    printf("Original text: %s\n", text);
    printf("Substring: %s\n", textResult);

    printf("-----------------------------------------\n");

    return 0;
}