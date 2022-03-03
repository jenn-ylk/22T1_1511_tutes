// A program that uses loops to count
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {

    int end;
    printf("Enter finish: ");
    scanf("%d", &end);
    
    int div;
    printf("Enter divisibility: ");
    scanf("%d", &div);
    
    int i = 1;
    while (i <= end) {
        if (i % div == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
