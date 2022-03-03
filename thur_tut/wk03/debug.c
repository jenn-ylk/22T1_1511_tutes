#include <stdio.h>

int main(void) {
    printf("Counting the number of minutes in a number of hours.");
    printf("How many hours: ");
   
    // these variables should be more clearly named
    int a;
    scanf("%d", &a);
 
    // should initialise b
    int b = 0;
    int c = 0;
    int d = 0;
    int total_minutes = 0;
    
    while (b < a) {
        while (c < 60) {
        }
        total_minutes = total_minutes + 60;
        a = a + 1;
    }

    printf("There are %c minutes in %d hours.\n" ,total_minutes, a);
    return 1;
