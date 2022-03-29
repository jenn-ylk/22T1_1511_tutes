#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    // TODO: change this to use a 2D array
    int square[SIZE][SIZE] = {0};
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            square[row][column] = 1;
            column = column + 1;
        }
        row = row + 1;
    }
    
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", square[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
