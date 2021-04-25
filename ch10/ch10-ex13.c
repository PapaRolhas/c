/*  Chapter 10
    Exercise 13 */

#include <stdio.h>

void uppercase(char text[]){

    int i;

    for(i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 'a' + 'A';
    }

}

int main(void){

    void uppercase(char text[]);
    char text[20] = "This IS MY TExt";

    printf("Program to convert lowercase characters into uppercase characters\n");
    printf("-----------------------------------------------------------------\n");

    printf("Original string: %s\n", text);

    uppercase(text);

    printf("String after \'uppercase\': %s\n", text);

    printf("-----------------------------------------------------------------\n");

    return 0;
}