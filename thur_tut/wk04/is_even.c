// A program that calls the function is_even

#include <stdio.h>

int is_even(int num);

int main(void) {

    int num;
    scanf("%d", &num);
    // call is_even
    int result = is_even(num);
    
    printf("is_even(%d) returned %d\n", num, result);

    return 0;
}

// check whether a number is even or not
// returns 1 if even, 0 if odd
int is_even(int num) {
    int result;
    if (num % 2 == 0) {
        result = 1;
    } else {
        result = 0;
    }
    
    return result;
}
