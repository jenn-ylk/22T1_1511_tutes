// code that allows us to make a list of people (students)
// creates a linked list out of student structs
// with some modification

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 32

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    // TODO: make the student point to the next student
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);

struct student *insert_student(int zID, double mark, char *name, struct student *head);

int main (void) {
    /*
    struct student *frankie = create_student(5123456, 74.5, "Frankie");
    printf("%s (z%d): %lf\n", frankie->name, frankie->zID, frankie->mark);
    // Add more students to the list, using create_student
    
    struct student *harry = create_student(5000000, 71.3, "Harry");
    printf("%s (z%d): %lf\n", harry->name, harry->zID, harry->mark);
    
    struct student *lucy = create_student(5111111, 62.9, "Lucy");
    printf("%s (z%d): %lf\n", lucy->name, lucy->zID, lucy->mark);
    
    frankie->next = harry;
    harry->next = lucy;
    */
    
    struct student *head = insert_student(5123456, 74.5, "Frankie", NULL);
    head = insert_student(5000000, 71.3, "Harry", head);
    head = insert_student(5111111, 62.9, "Lucy", head);
    head = insert_student(5222222, 83.2, "Carlos", head);
    
    // print the whole linked list
    printf("All students names\n");
    struct student *current = head;
    while (current != NULL) {
        printf("%s\n", current->name);
        // move on to the next node
        current = current->next;
    }
    
    // TODO: print only the last student in the list
    
    return 0;
}

struct student *create_student(int zID, double mark, char *name) {
    // allocate memory for the student, and initialise fields
    struct student *new = malloc(sizeof(struct student));
    
    new->zID = zID;
    new->mark = mark;
    strcpy(new->name, name);
    new->next = NULL;
    
    // How could this be changed to insert a student to an existing list?
    return new;
}

struct student *insert_student(int zID, double mark, char *name, struct student *head) {
    // NOTE: this has set the next node to NULL
    struct student *new = create_student(zID, mark, name);
    
    // insert the student into the list
    if (head == NULL) {
        return new;
    } else {
        // go to the tail of the list
        struct student *current = head;
        while (current->next != NULL) {
            // move through the list
            current = current->next;
        }
        
        // now at the end of the list
        current->next = new;
        return head;
    }

}
