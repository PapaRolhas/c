/*  Chapter 10
    Exercise 14 */

#include <stdio.h>

void intToStr(int value, char text[]){

    int i, r, count = 0;
    int offset = 0;
    
    if(value < 0){
        text[0] = '-';
        offset = 1;
    }

    int tmp = value;
    while(tmp != 0){
        tmp = tmp / 10;
        count++;
    }

    for(i = 0; value != 0; i++){
        /* 1234 */
        r = value % 10;
        value = value / 10;
        text[count-1+offset-i] = r + '0';
    }
    
}

int main(void){

    void intToStr(int value, char text[]);
    char text[20] = "";
    int value = 75992;

    printf("Program to convert an integer to a string\n");
    printf("-----------------------------------------\n");

    intToStr(value, text);

    printf("The integer %i is the string \"%s\"\n", value, text);

    printf("-----------------------------------------\n");

    return 0;
}