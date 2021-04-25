/*  Chapter 10
    Exercise 11 */

#include <stdio.h>

int strToInt(const char string[]){

    int i, intValue, result = 0;
    int sign;

    if(string[0] == '-'){
        i = 1;
        sign = -1;
    }
    else{
        i = 0;
        sign = 1;
    }

    for(i = i; string[i] >= '0' && string[i] <= '9'; i++){
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    return result * sign;
}

int main(void){
    
    int strToInt(const char string[]);
    const char value1[] = "125";
    const char value2[] = "-132";

    printf("Program to convert a string into an integer value.\n");
    printf("--------------------------------------------------\n");

    printf("String \"%s\" to integer: %i\n", value1, strToInt(value1));
    printf("String \"%s\" to integer: %i\n", value2, strToInt(value2));

    printf("--------------------------------------------------\n");

    return 0;
}