//

#include <stdio.h>

#define SIZE 7

void array_print(int length, int array[]);
void squares(int length, int array[]);

int main(void) {

    // declaring an array of 7 zeros
    //int zeros[SIZE] = {0};
    
    int nums[SIZE] = {1, 1, 1, 1, 1, 1, 1};
    
    printf("Before squares:\n");
    array_print(SIZE, nums);
    squares(SIZE, nums);
    printf("After squares:\n");
    array_print(SIZE, nums);

    return 0;
}


void array_print(int length, int array[]) {
    // the first value is at index 0
    int i = 0;
    while (i < length) {
        printf("%d\n", array[i]);
        i++;
    }
}


void squares(int length, int array[]) {
    int i = 0;
    while (i < length) {
        array[i] = i * i;
        i++;
    }
}
