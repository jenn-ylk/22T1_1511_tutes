#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_first(int value, struct node *head);

void print_list(struct node *head);

void free_list(struct node *head);

int main(void) {

    int i = 0;
    struct node *head = NULL;
    while (i < 10) {
        // `insert_first` is a function which malloc's a new node, 
        // inserts it at the head of the list, and
        // returns it.
        head = insert_first(i, head);
        i++;
    }
    print_list(head);
    free_list(head);
    // TODO: try accessing the node after the head, now head is freed

    return 0;
}

// allocates memory for the new node, 
// makes it contain the value given, and point to head of preexisting list
// returns the pointer to the new node
struct node *insert_first(int value, struct node *head) {
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = head;
    
    return new;
}

// prints out the contents of a linked list
void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("X\n");
}

// frees all the nodes in a linked list
void free_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        // get the next pointer before freeing (avoid use after free)
        struct node *next = current->next;
        free(current);
        current = next;
    }
}
