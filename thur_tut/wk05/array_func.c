// array functions

#include <stdio.h>

#define LENGTH 10

int array_length(int nums[]);
int test_all_positive(int length, int nums[]);
int test_all_initialized(int length, int nums[]);

int main(void) {
  	int arr[LENGTH];
  
  	// fill the array
  	int i = 0;
  	while (i < LENGTH) {
    	arr[i] = i + 1;
    	i++;
    }
    arr[5] = -1;
  
    // TODO: call the functions (that we CAN make)
    return 0;
}

// returns the number of elements in the array nums
int array_length(int nums[]) {
	return 0;
}

// returns 1 if all elements of array nums are positive, otherwise returns 0
int test_all_positive(int length, int nums[]) {
    return 0;
}

// returns 1 if all elements of array nums are initialized, otherwise returns 0
int test_all_initialized(int length, int nums[]) {
	return 0;
}
