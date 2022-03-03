// Using while loops to draw patterns with asterisks
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {

    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);
    
    
    // print out asterisks in a square
    int row = 0;
    // which row is being printed
    while (row < size) {
        // each row starts at col. 0
        int col = 0;
        while (col < size) {
        
            // use coordinates to decide which character to print (triangle)
           
            if (col <= row) {
                printf("*");
            } else {
                printf("-");
            }
            // tell the computer it's the next column
            col++;
        }
        // move to the next row
        printf("\n");
        // tell the computer it's on the next row
        row++;
    }

    return 0;
}
