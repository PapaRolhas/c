#include <stdio.h>

int main(void){
    
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    do{
        right_digit = number % 10;
        number = number / 10;

        printf("%i", right_digit);
    }while(number != 0);
    
    printf("\n");

    return 0;
}