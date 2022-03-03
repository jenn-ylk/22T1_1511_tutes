// Print all numbers is a range that are divisible by 7
// By combining conditions (divisibility) and while looping into a program
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {

    int end;
    
    printf("Enter finish: ");
    scanf("%d", &end);
    
    int i = 1;
    while (i <= end) {
        // ifs can be nested inside whiles
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
