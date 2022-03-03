// takes in the side lengths of a rectangle and prints out the resulting area
// wk02 tutorial

#include <stdio.h>

int main (void) {

    // TODO:
    int width;
    int height;
    
    // ask for input, then scan (with scanf)
    printf("Enter the width: ");
    scanf("%d", &width);
    
    printf("Enter the height: ");
    scanf("%d", &height);

    // for ints, can also use >= 1
    if (width > 0 && height > 0) {
        printf(
            "Our rectangle is %d by %d and its area is %d squared\n", 
            width, height, width * height
        );
    } else {
        if (width <= 0 && height <= 0) {
            printf("Width and height are less than or equal to zero\n");
        } else if (width <= 0) {
            printf("Width is less than or equal to zero\n");
        } else {
            // last case available, only height is invalid
            printf("Height is less than or equal to zero\n");
        }
    }
    return 0;
}
