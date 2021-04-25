/*  Chapter 3
    Exercise 4  */

#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int computeNdays(struct date d1);
int computeWeekDay(int N);

int main(void){

    struct date date1;
    int numberOfDays;
    int weekDay;

    printf("Program to compute the week day of a random date.\n");
    printf("-------------------------------------------------\n");
    printf("Enter a date (mm/dd/yyyy).\n");
    printf("date: ");
    scanf("%i/%i/%i", &date1.month, &date1.day, &date1.year);

    numberOfDays = computeNdays(date1);
    weekDay      = computeWeekDay(numberOfDays);

    switch(weekDay){
        case 1:
            printf("\n%i/%i/%i is a Monday.\n", date1.month, date1.day, date1.year);
            break;
        case 2:
            printf("\n%i/%i/%i is a Tuesday.\n", date1.month, date1.day, date1.year);
            break;
        case 3:
            printf("\n%i/%i/%i is a Wednesday.\n", date1.month, date1.day, date1.year);
            break;
        case 4:
            printf("\n%i/%i/%i is a Thrusday.\n", date1.month, date1.day, date1.year);
            break;
        case 5:
            printf("\n%i/%i/%i is a Friday.\n", date1.month, date1.day, date1.year);
            break;
        case 6:
            printf("\n%i/%i/%i is a Saturday.\n", date1.month, date1.day, date1.year);
            break;
        default:
            printf("\n%i/%i/%i is a Sunday.\n", date1.month, date1.day, date1.year);
            break;
    }
    printf("-------------------------------------------------\n");

    return 0;
}

//  Function to calculate the number of days of a date

int computeNdays(struct date d1){
    
    int days;

    days = 1461 * (d1.month <= 2 ? d1.year - 1 : d1.year) / 4 + 153 * (d1.month <= 2 ? d1.month + 13 : d1.month + 1) / 5 + d1.day - 621049; 
    // (condition ? expression1 : expression2)

    return days;
}

//  Function to compute the week day of a date

int computeWeekDay(int N){

    int weekDay;

    weekDay = N % 7;

    return weekDay;
}




