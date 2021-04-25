/*  Chapter 10
    Exercise 7  */

#include <stdio.h>

void insertString(char text[], char insertText[], int pos){

    int i, j;
    int lengthText = 0, count = 0;
    char c;

    while(text[lengthText] != '\0')
        lengthText++;

    while(insertText[count] != '\0')
        count++;

    /*  
        the wrong son
        0123456789012 - 13
        -------------
        the wrong ###son
    */
    for(i = 0; i < count+lengthText-pos; i++){
        text[lengthText+count-i-1] = text[lengthText-i-1]; 
    }

    for(i = pos; i < pos+count; i++){
        text[i] = insertText[i-pos];
    }

}

int main(void){

    void insertString(char text[], char insertText[], int pos);
    char text[100] = "the wrong son";
    char insertText[] = "per";
    int  pos = 7; 

    printf("Function to insert string in a string.\n");
    printf("--------------------------------------\n");

    printf("String before insertion: %s\n", text);

    insertString(text, insertText, pos);
    
    printf("String after insertion: %s\n", text);

    printf("--------------------------------------\n");

    return 0;
}