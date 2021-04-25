/*  Chapter 6
    Exercise 6  */

#include <stdio.h>
#include <math.h>

int main(void){

    int i, number, reverse_number = 0, digit;

    printf("Enter a number: \n");
    scanf("%i", &number);

    do{
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        number         = number / 10;
        i++;
    }while(number != 0);

    do{
        digit = reverse_number % 10;
        i--;
        switch(digit){
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("Not a digit.\n");
                break;
        }
        reverse_number = reverse_number / 10;
    }while(i > 0);

    return 0;
}