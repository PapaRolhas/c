/*  Chapter 10
    Exercise 8  */

#include <stdio.h>

int findString(char s1[], char s2[]){

    char c = s2[0];
    int i, j;
    int pos = -1;

    for(i = 0; s1[i] != '\0'; i++){
        if(c == s1[i]){
            j = 0;
            while(s2[j] == s1[j+i]){
                j++;
                if(s2[j] == '\0'){
                    pos = i;
                    return pos;
                }
            }
        }
    }

    return pos;
}

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

void replaceString(char source[], char s1[], char s2[]){

    int i, pos, count;

    pos = findString(source, s1);

    while(s1[count] != '\0')
        count++;    

    removeString(source, pos, count);

    insertString(source, s2, pos);

}

int main(void){

    void replaceString(char source[], char s1[], char s2[]);
    void insertString(char text[], char inserText[], int pos);
    void removeString(char text[], int start, int n);
    int  findString(char s1[], char s2[]);

    char source[81] = "In 1 sentence. Line 1.";
    char s1[] = "1";
    char s2[] = "one";

    printf("Program to replace a string from another.\n");
    printf("-----------------------------------------\n");

    printf("Original string: %s\n", source);
    
    replaceString(source, s1, s2);

    printf("Replaced string: %s\n", source);

    printf("-----------------------------------------\n");

    return 0;
}