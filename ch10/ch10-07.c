#include <stdio.h>
#include <stdbool.h>

//  Function to determine if a character is alphabetic

bool alphabetic(const char c){
    
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}

//  Function to count the number of words in a string

int countWords(const char string[]){

    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic(const char c);

    for(i = 0; string[i] != '\0'; i++){
        if(alphabetic(string[i])){
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

    const char text1[] = "Well, here goes. Well, here goes. Well, here goes.";
    const char text2[] = "And here we go... again";
    const char text3[] = "wendy glanced up at the ceiling where the mound of lasagna loomed like a mottled mountain range. within seconds, she was crowned with ricotta ringlets and a tomato sauce tiara. Bits of beef formed meaty moles on her forehead. After the second thud, her culinary coronation was complete.";
    int countWords(const char string[]);

    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));
    printf("%s - words = %i\n", text3, countWords(text3));

    return 0;
}