// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *new_list = NULL;

    // go through every element of the list, and make a copy to the end of list
    struct node *current = list;
    while (current != NULL) {
        new_list = add_last(new_list, current->data);
        current = current->next;
    }
    
    return new_list;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *new = NULL;
    
    // When the first list is empty, just return a copy of the second list
    if (first_list == NULL) {
        new = copy(second_list);
    } else {
        // copies of the list are used so they can be modified separately
        new = copy(first_list);
        struct node *current = new;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = copy(second_list);
    }
    
    
    return new;
}

int identical(struct node *first_list, struct node *second_list) {
    int matched = 1;
    struct node *curr_1 = first_list;
    struct node *curr_2 = second_list;
    // check each value until a list ends
    while (curr_1 != NULL && curr_2 != NULL && matched == 1) {
        if (curr_1->data != curr_2->data) {
            matched = 0;
        }
        curr_1 = curr_1->next;
        curr_2 = curr_2->next;
    }
    
    if (curr_1 != NULL || curr_2 != NULL) {
        matched = 0;
    }
    
    return matched;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}

void free_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        // save the previous item
        struct node *temp = current;
        current = current->next;
        // free memory (after moving current along)
        free(temp);
    }
}
