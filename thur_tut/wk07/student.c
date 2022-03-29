// introduction to struct pointers!
// TODO: why might you eventually want a struct pointer?

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student {
  int zID;
  double wam;
  // TODO: why is this easier than calling this a char * ?
  char name[MAX_NAME_LENGTH];
  // pointer to next (linked lists)
  // struct student *next;
};

int main(void) {
    // make a struct student, and a pointer to the student
    struct student stu;
    
    // TODO: initialise the fields using a pointer to the struct
    // (in the future, we'll allocate the memory - with a new function!)
    
    // TODO: fill in the fields of the student
    
    // TODO: print out student info
    
    return 0;
}

