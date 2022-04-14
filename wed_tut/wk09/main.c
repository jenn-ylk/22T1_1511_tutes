// main function that calls functions from list.c

#include <stdio.h>
#include "list.h"

int main (void) {
    // scan in the first list
    int length;
    printf("How long is list1? ");
    scanf("%d", &length);
    
    struct node *list_1 = NULL;
    int value;
    int i = 0;
    while (i < length) {
        printf("Enter a value: ");
        scanf("%d", &value);
        list_1 = add_last(list_1, value);
        
        i++;
    }
    print_list(list_1);
    
    printf("Making a copy of list1...\n");
    struct node *list_1_copy = copy(list_1);
    print_list(list_1_copy);
    
    // check that the copy and the original aren't the same memory
    // - What is the address of the head?
    // - Can you free one, and still print the other?
    printf("Freeing the copy, and checking that the original still exists\n");
    free_list(list_1_copy);
    print_list(list_1);
    
    
    printf("How long is list2? ");
    scanf("%d", &length);
    
    struct node *list_2 = NULL;
    i = 0;
    while (i < length) {
        printf("Enter a value: ");
        scanf("%d", &value);
        list_2 = add_last(list_2, value);
        
        i++;
    }
    print_list(list_2);
    
    printf("Making a list that is list_1 appended to list_2...\n");
    struct node *list_3 = list_append(list_1, list_2);
    print_list(list_3);
    
    // test identical
    printf("identical(list_1, list_2) returns %d\n", identical(list_1, list_2));
    
    free_list(list_1);
    free_list(list_2);
    free_list(list_3);
    

    return 0;
}
