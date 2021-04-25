/*  Chapter 11
    Exercise 11 */

#include <stdio.h>
#include <stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

void dateUpdate(struct date *d);
int numberOfDays(struct date *d);
bool isLeapYear(struct date *d);

void dateUpdate(struct date *d){
    if((*d).day != numberOfDays(d)){
        (*d).day   = (*d).day + 1;
        (*d).month = (*d).month;
        (*d).year  = (*d).year;
    }
    else if((*d).month == 12){
        (*d).day   = 1;
        (*d).month = 1;
        (*d).year  = (*d).year + 1;
    }
    else{
        (*d).day   = 1;
        (*d).month = (*d).month + 1;
        (*d).year  = (*d).year;
    }
}

int numberOfDays(struct date *d){
    int days;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};
    
    if(isLeapYear(d) && (*d).month == 2)
        days = 29;
    else
        days = daysPerMonth[(*d).month-1];

    return days;
}

bool isLeapYear(struct date *d){
    bool leapYearFlag;

    if( ((*d).year % 4 == 0 && (*d).year % 100 != 0) || (*d).year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;
    
    return leapYearFlag;
}

int main(void){

    struct date Date;
    struct date *ptr;

    printf("Program to update date with pointers.\n");
    printf("-------------------------------------\n");

    printf("Today's date: mm/dd/yyyy\n");
    scanf("%i/%i/%i", &Date.month, &Date.day, &Date.year);    
    
    ptr = &Date;
    
    dateUpdate(ptr);

    printf("Tomorrow's date: %i/%i/%.2i\n", Date.month, Date.day, Date.year);

    printf("-------------------------------------\n");

    return 0;
}