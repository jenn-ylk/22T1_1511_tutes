// A program that uses a struct to store information about the time
// Tutorial week 3, COMP1511

#include <stdio.h>

struct time {
    int hour;
    int minute;
    // 'a' or 'p'
    char meridiem;
};

int main (void) {

    // initialise the struct
    // the values in the curly brackets go in order to the
    // corresponding fields of the struct
    struct time clock_time = {9, 41, 'a'};
    
    struct time finish_time;
    //           ^ variable name (instantiated struct time)
    // another (more readable) way to initialise fields
    finish_time.hour = 4;
    finish_time.minute = 0;
    finish_time.meridiem = 'p';
    
    printf(
        "The time recorded is %02d:%02d %cm\n", 
        clock_time.hour, clock_time.minute, clock_time.meridiem
    );
    
    printf(
        "The finish time is %02d:%02d %cm\n", 
        finish_time.hour, finish_time.minute, finish_time.meridiem
    );

    return 0;
}
