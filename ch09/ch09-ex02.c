/*  Chapter 9
    Exercise 2  */

#include <stdio.h>

int f(int year, int month);
int g(int month);

struct date{
    int month;
    int day;
    int year;
};

int main(void){

    int numberOfDaysBetweenTwoDates(struct date d1, struct date d2);

    struct date date1, date2;

    printf("Program to calculate number of days between two dates.\n");
    printf("------------------------------------------------------\n");
    printf("Enter two dates (mm/dd/yyyy).\nFirst date: ");
    scanf("%i/%i/%i", &date1.month, &date1.day, &date1.year);
    printf("Second date: ");
    scanf("%i/%i/%i", &date2.month, &date2.day, &date2.year);

    printf("\n");

    int days = numberOfDaysBetweenTwoDates(date1, date2);

    printf("The number of days between the 1st date and 2nd date is %i.\n", days);

    printf("------------------------------------------------------\n");

    return 0;
}

//  Function to calculate number of days between two dates

int numberOfDaysBetweenTwoDates(struct date d1, struct date d2){

    int days, N1, N2;

    N1 = 1461 * f(d1.year, d1.month) / 4 + 153 * g(d1.month) / 5 + d1.day;

    N2 = 1461 * f(d2.year, d2.month) / 4 + 153 * g(d2.month) / 5 + d2.day;

    days = N2 - N1;

    return days;
}

int f(int year, int month){

    if(month <= 2){
        printf("f returned: %i\n", year - 1);
        return year - 1;
    }
    else{
        printf("f returned: %i\n", year);
        return year;
    }

}

int g(int month){

    if(month <= 2){
        printf("g return: %i\n", month + 13);
        return month + 13;
    }
    else{
        printf("g return: %i\n", month + 1);
        return month + 1;
    }
}