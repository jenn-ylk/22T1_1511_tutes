// A program that uses a struct to store information about the time
// Tutorial week 3, COMP1511

#include <stdio.h>

struct time {
    int hour;
    int minute;
    char meridiem;
    // ^ type (for field)
};

int main (void) {
    
    // Generally, initialise the struct, then give each field a value
    // - clearer, less confusing (especially if field order gets changed
    struct time curr_time; 
    curr_time.hour = 9;
    // ^name.field = value;
    curr_time.minute = 25;
    curr_time.meridiem = 'a';
    
    printf(
        "The time is %02d:%02d %cm\n", 
        curr_time.hour, curr_time.minute, curr_time.meridiem
    );
    
    // another way to initialise a struct in one line
    struct time end_time = {12, 0, 'p'};
    
    printf(
        "The lab ends at %02d:%02d %cm\n", 
        end_time.hour, end_time.minute, end_time.meridiem
    );
    
    return 0;
}
