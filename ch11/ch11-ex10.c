/*  Chapter 11
    Exercise 10 */

#include <stdio.h>

int compareStrings(char *ptr1, char *ptr2){
    
    while((*ptr1) == (*ptr2) && (*ptr1) != '\0' && (*ptr2) != '\0'){
        ptr1++;
        ptr2++;
    }

    if((*ptr1) < (*ptr2))
        return -1;
    else if((*ptr1) == *(ptr2))
        return 0;
    else
        return 1;
}

int main(void){

    int compareStrings(char *ptr1, char *ptr2);
    char text1[81] = "This is a text";
    char text2[81] = "Abcdefghijklmn";
    char text3[81] = "Abcdefghijklmn";

    printf("Program to compare strings with pointers.\n");
    printf("-----------------------------------------\n");

    char *ptr1 = text1;
    char *ptr2 = text2;
    char *ptr3 = text3;

    int result = compareStrings(ptr1, ptr2);
    
    if(result == 1)
        printf("The first text is lexicographically higher than the second.", text1, text2);       
    else if(result == -1)
        printf("The first text is lexicographically lesser than the cond.", text1, text2);
    else 
        printf("Both texts are equal.", text1, text2);       


    printf("\n-----------------------------------------\n");
    
    return 0;
}