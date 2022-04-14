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
    
    struct node *current = list;
    while (current != NULL) {
        // loop through the linked list
        // add the data in each node to the end of a new list
        new_list = add_last(new_list, current->data);
        current = current->next;
    }
    return new_list;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *new_list = NULL;
    if (first_list == NULL) {
        new_list = copy(second_list);
    } else {
        new_list = copy(first_list);
        // use current to keep the head of the new list
        struct node *current = new_list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = copy(second_list);
    }
    return new_list;
}

int identical(struct node *first_list, struct node *second_list) {
    int match = 1;
    struct node *curr_1 = first_list;
    struct node *curr_2 = second_list;
    while (match == 1 && curr_1 != NULL && curr_2 != NULL) {
        // check whether the data in the nodes doesn't match
        if (curr_1->data != curr_2->data) {
            match = 0;
        }
        curr_1 = curr_1->next;
        curr_2 = curr_2->next;
    }
    
    // alternatively, check if curr_1 != curr_2 
    // (if the loop ended because of ending a list, one of these is NULL)
    if (curr_1 != NULL || curr_2 != NULL) {
        match = 0;
    }
    return match;
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
        // get the next pointer before freeing (avoid use after free)
        struct node *next = current->next;
        free(current);
        current = next;
    }
}
