/*  Chapter 8
    Exercise 16 */

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumberAndBase(void){

    do{
        printf("Base ? ");
        scanf("%i", &base);

        if(base < 2 || base > 16){
            printf("Bad base - must be between 2 and 16\n");
        }
    }while(base < 2 || base > 16);

}

void convertNumber(void){
    
    do{
        convertedNumber[digit] = numberToConvert % base;
        digit++;
        numberToConvert /= base;
    }while(numberToConvert != 0);

}

void displayConvertedNumber(void){

    const char baseDigits[16] = {
                '0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    printf("Converted number = ");

    for(digit--; digit >= 0; digit--){
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }
    
    printf("\n");

}

int main(void){
    
    void getNumberAndBase(void);
    void convertNumber(void);
    void displayConvertedNumber(void);
    int number;

    do{
        printf("Number to be converted ? ");
        scanf("%li", &number);

        if(number == 0)
            break;

        numberToConvert = number;

        getNumberAndBase();
        convertNumber();
        displayConvertedNumber();
    }while(number != 0);
        
    return 0;
}