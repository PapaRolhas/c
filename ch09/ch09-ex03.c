/*  Chapter 9
    Exercise 3  */

#include <stdio.h>

struct time{
    int hours;
    int minutes;
    int seconds;
};

int main(void){

    struct time elapsed_time(struct time t1, struct time t2);
    struct time time1, time2, diff_time;

    printf("Program to calculate elapsed time between two times.\n");
    printf("----------------------------------------------------\n");
    printf("Enter two times (hh:mm:ss).\n");
    
    printf("Time 1: ");
    scanf("%i:%i:%i", &time1.hours, &time1.minutes, &time1.seconds);
    
    printf("Time 2: ");
    scanf("%i:%i:%i", &time2.hours, &time2.minutes, &time2.seconds);

    diff_time = elapsed_time(time1, time2);

    printf("\nElapsed time is: %i:%i:%i", diff_time.hours, diff_time.minutes, diff_time.seconds);

    printf("----------------------------------------------------\n");

    return 0;
}

//  Function to calaculate elpased time between two times

struct time elapsed_time(struct time t1, struct time t2){

    struct time diff_time = {0, 0, 0};
    int rHour = 0, rMin = 0;

    
    if(t2.seconds < t1.seconds){
        diff_time.seconds = 60 + (t2.seconds - t1.seconds);
        rMin = 1;
    }
    else
        diff_time.seconds = (60 + (t2.seconds - t1.seconds)) % 60;

    if(t2.minutes < t1.minutes + rMin){
        diff_time.minutes = 60 + (t2.minutes - t1.minutes) - rMin;
        rHour = 1;
    }
    else
        diff_time.minutes = ((60 + (t2.minutes - t1.minutes)) - rMin) % 60;

    if(t2.hours < t1.hours + rHour){
        diff_time.hours = 24 + (- t2.hours + t1.hours) - rHour;
    }
    else
        diff_time.hours = (24 + (t2.hours - t1.hours) - rHour) % 24;

    return diff_time;
}