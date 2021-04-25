/*  Chapter 6
    Exercise 4  */

#include <stdio.h>

int main(void){

    float number, accumulator = 0;
    char  operator;

    printf("Begin calculations\n");

    while(operator != 'E'){
        scanf("%f %c", &number, &operator);        
        
        switch(operator){
            case '+':
                accumulator = accumulator + number;
                printf("= %.6f\n", accumulator);
                break;
            case '-':
                accumulator = accumulator - number;
                printf("= %.6f\n", accumulator);
                break;
            case '*':
                accumulator *= number;
                printf("%.6f\n", accumulator);
                break;
            case '/':
                if(number == 0)
                    printf("Division by zero.\n");
                else{
                    accumulator /= number;
                    printf("= %.6f\n", accumulator);
                }
                break;
            case 'S':
                accumulator = number;
                printf("= %.6f\n", accumulator);
                break;
            case 'E':
                printf("End of Calculations.\n");
                break;
            default:
                printf("Unknow operator.\n");            
                break;
        }
    }

    return 0;
}