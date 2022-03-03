// A program that uses loops to count
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {
    int end;
    int increment;
    
    printf("Enter finish: ");
    scanf("%d", &end);
    
    printf("Enter increment: ");
    scanf("%d", &increment);
    
    int i = 1;
    while (i <= end) {
        printf("%d\n", i);
        i = i + increment;
    }
    
    return 0;
}
