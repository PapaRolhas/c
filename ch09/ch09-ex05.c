/*  Chapter 9
    Exercise 5  */

#include <stdio.h>
#include <stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

struct time{
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime{
    struct date sdate;
    struct time stime;
};

struct dateAndTime clockKeeper(struct dateAndTime dnt1);
struct time timeUpdate(struct time now);
struct date dateUpdate(struct date today);

int main(void){
    
    struct dateAndTime dnt;
    
    printf("Program to update date and time.\n");
    printf("--------------------------------\n");
    printf("Enter a date (mm/dd/yyyy):\n");
    
    printf("date: ");
    scanf("%i/%i/%i", &dnt.sdate.month, &dnt.sdate.day, &dnt.sdate.year);
    
    printf("Enter a time (hh:mm:ss):\n");
    printf("time: ");
    scanf("%i:%i:%i", &dnt.stime.hours, &dnt.stime.minutes, &dnt.stime.seconds);
    
    dnt = clockKeeper(dnt);

    printf("Updated date and time:\n");
    printf("%i/%i/%i # %.2i:%.2i:%.2i", dnt.sdate.month, dnt.sdate.day, dnt.sdate.year, dnt.stime.hours, dnt.stime.minutes, dnt.stime.seconds);

    return 0;
}

//  Function to update new date and time

struct dateAndTime clockKeeper(struct dateAndTime dnt1){

    int day = 0;

    dnt1.stime = timeUpdate(dnt1.stime);

    if(dnt1.stime.hours == 0 && dnt1.stime.minutes == 0 && dnt1.stime.seconds == 0)
        dnt1.sdate = dateUpdate(dnt1.sdate);


    return dnt1;
}

//  Function to update the time by one second

struct time timeUpdate(struct time now){

    now.seconds++;

    if(now.seconds == 60){
        now.seconds = 0;
        now.minutes++;

        if(now.minutes == 60){
            now.minutes = 0;
            now.hours++;

            if(now.hours == 24)
                now.hours = 0;
        }
    }    

    return now;
}

//  Function to calculate tomorrow's date

struct date dateUpdate(struct date today){

    struct date tomorrow;
    int numberOfDays(struct date d);

    if(today.day != numberOfDays(today)){
        tomorrow.day   = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year  = today.year;
    }
    else if(today.month == 12){
        tomorrow.day   = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year  = today.year;
    }
    else{
        tomorrow.day   = 1;
        tomorrow.month = 1;
        tomorrow.year  = today.year + 1;
    }

    return tomorrow;
}

//  Function to find the number of days in a month

int numberOfDays(struct date d){
    
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if(isLeapYear(d) && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

//  Function to determine if it's a leap year

bool isLeapYear(struct date d){

    bool leapYearFlag;        

    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}
