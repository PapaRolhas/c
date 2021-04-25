/*  Chapter 14
    Exercise 2  */

#include <stdio.h>

enum month {january = 1, february, march, april, may, june,
            july, august, september, october, november, december};   

char * monthName(enum month aMonth){
    
    switch (aMonth){
    case 1:
        return "January";
        break;    
    case 2:
        return "February";
        break;    
    case 3:
        return "March";
        break;    
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;    
    case 6:
        return "June";
        break;    
    case 7:
        return "July";
        break;    
    case 8:
        return "August";
        break;    
    case 9:
        return "September";
        break;    
    case 10:
        return "October";
        break;    
    case 11:
        return "November";
        break;    
    case 12:
        return "December";
        break;    
    default:
        break;
    }
}

int main(void){
    
    char * monthName(enum month aMonth);

    printf("Program to print month names.\n");
    printf("-----------------------------\n");

    enum month aMonth;

    printf("Enter a month number: ");
    scanf("%d", &aMonth);

    printf("%s\n", monthName(aMonth));    

    printf("-----------------------------\n");

    return 0;
}