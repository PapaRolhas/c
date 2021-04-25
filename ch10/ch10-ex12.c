/*  Chapter 10
    Exercise 12 */

#include <stdio.h>
#include <stdbool.h>

float strToFloat(const char s1[]){

    int expoent = 10, i, sign;
    float floatValue, iPart = 0, fPart = 0;
    bool isFloat = false;

    if(s1[0] == '-'){
        i = 1;
        sign = -1;
    }
    else{
        i = 0;
        sign = 1;
    }

    for(i = i; s1[i] != '\0'; i++){
        if(s1[i] == '.'){
            isFloat = true;
            i++;
        }

        if(!isFloat){
            floatValue = s1[i] - '0';
            iPart = (float) iPart * 10 + floatValue; 
        }
        else{
            floatValue = s1[i] - '0';
            fPart = (float) fPart + floatValue / expoent;
            expoent = expoent * 10;
        }
    }

    return (float) (iPart + fPart) * sign;
}

int main(void){

    float strToFloat(const char s1[]);
    const char value1[] = "-234.56";
    const char value2[] = "79.4365";
    const char value3[] = "-867.6921";

    printf("Program to convert a string into a float value.\n");
    printf("-----------------------------------------------\n");

    printf("String \"%s\" is float %.2f\n", value1, strToFloat(value1));
    printf("String \"%s\" is float %.4f\n", value2, strToFloat(value2));
    printf("String \"%s\" is float %.4f\n", value3, strToFloat(value3));

    printf("-----------------------------------------------\n");

    return 0;
}