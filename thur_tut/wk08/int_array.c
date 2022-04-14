// introduction to malloc, specifically here to make an int pointer
// and use as a dynamically sized array

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    // making a dynamically sized array
    int length;
    printf("Enter array length: ");
    scanf("%d", &length);
    
    // get pointer with space for length integers
    // malloc memory for the array
    int *int_ptr = malloc(sizeof(int) * length);
    // changes the first value in the array
    // *int_ptr = length;
    
    printf("%p is the int address to the array\n", int_ptr);
    
    printf("Enter values for the array: \n");
    int i = 0;
    while (i < length) {
        // scan these numbers in
        scanf("%d", &int_ptr[i]);
        // arr[i] == *(arr + i)
        i++;
    }
    
    printf("Printing the array:\n");
    int j = 0;
    while (j < length) {
        printf("%d\n", (int_ptr[j]));
        
        j++;
    }
    
    
    return 0;
}

