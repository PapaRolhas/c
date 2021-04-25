/*  Chapter 10
    Exercise 5  */

#include <stdio.h>

int findString(char s1[], char s2[]){

    char c = s2[0];
    int i, j;
    int pos = -1;

    printf("\n\n");

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

int main(void){

    int findString(char s1[], char s2[]);
    char text1[] = "maybe done";
    char text2[] = "one";
    int pos;

    printf("Program to check if one string exists inside other\n");
    printf("--------------------------------------------------\n");

    pos = findString(text1, text2);

    if(pos != -1)
        printf("The %s exists in %s.\nThe position is: %i.\n", text2, text1, pos);
    else
        printf("The %s does not exists in %s.\n", text2, text1);

    printf("--------------------------------------------------\n");

    return 0;
}