/*  Chapter 10
    Exercise 3  */

#include <stdio.h>
#include <stdbool.h>

//  Function to determine if a character is alphabetic

bool alphabeticOrNumber(const char c){
    
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
        return true;
    else if((c == '-') || (c >= '0' && c <= '9') || (c == '.') || (c == ','))
        return true;
    else
        return false;
}


//  Function to count the number of words and numbers in a string

int countWords(const char string[]){

    int i, wordCount = 0;
    bool lookingForWord = true, alphabeticOrNumber(const char c);

    for(i = 0; string[i] != '\0'; i++){
        if(alphabeticOrNumber(string[i])){
            if(lookingForWord){
                wordCount++;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;
    }

    return wordCount;
}

int main(void){

    const char text[]  = "word1, word2, word'3";
    const char text1[] = "word1, word2, wo'rd3, 123,456, -123.456";
    int countWords(const char string[]);
    int count = 0;

    printf("Program to count the number of words and number in a string.\n");
    printf("------------------------------------------------------------\n");
    
    printf("Text: \n");
    printf("%s\n\n", text1);

    count = countWords(text1);

    printf("There is %i words or number in the test string.\n", count);
    printf("------------------------------------------------------------\n");

    return 0;
}