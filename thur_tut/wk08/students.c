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
    struct student *next;
    // TODO: make the student point to the next student
};

struct student *create_student(int zID, double mark, char *name);

int main (void) {
    struct student *frankie = create_student(5123456, 74.5, "Frankie");
    printf("%s (z%d): %lf\n", frankie->name, frankie->zID, frankie->mark);
    
    struct student *henry = create_student(1234567, 100, "Henry");
    
    henry->next = frankie;
    
    // TODO: Add more students to the list, using create_student
    
    // TODO: print the whole linked list
    struct student *current = henry;
    while (current != NULL) {
        printf("%s\n", current->name);
        
        current = current->next;
    }
    
    // TODO: print only the last student in the list
    current = henry;
    while (current->next != NULL) {
        current = current->next;
    }
    // by this point, current == tail node
    printf("Last student: %s\n", current->name);
    
    // TODO: access using multiple arrows
    current = henry;
    printf("Accessing Henry: %s\n", current->name);
    printf("Accessing Frankie: %s\n", current->next->name);
    printf("Accessing NULL: %s\n", current->next->next->name);
    
    return 0;
}

struct student *create_student(int zID, double mark, char *name) {
    // TODO: allocate memory for the student, and initialise fields
    struct student *student_node = malloc(sizeof(struct student));
    student_node->zID = zID;
    student_node->mark = mark;
    strcpy(student_node->name, name);
    student_node->next = NULL;
    
    // How could this be changed to insert a student to an existing list?
    return student_node;
}
