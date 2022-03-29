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
    printf("test_all_positive(LENGTH, arr) returned %d\n", test_all_positive(LENGTH, arr));
	return 0;
}

// returns the number of elements in the array nums
int array_length(int nums[]) {
	return 0;
}

// returns 1 if all elements of array nums are positive, otherwise returns 0
int test_all_positive(int length, int nums[]) {
    int all_pos = 1;
    
    int i = 0;
    while (i < length && all_pos) {
        if (nums[i] <= 0) {
            all_pos = 0;
        }
        i++;
    }
	return all_pos;
}

// returns 1 if all elements of array nums are initialized, otherwise returns 0
int test_all_initialized(int length, int nums[]) {
	return 0;
}
