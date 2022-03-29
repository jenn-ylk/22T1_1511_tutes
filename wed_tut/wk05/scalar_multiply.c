#include <stdio.h>

#define MAX_SIZE 100

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main (void) {
    int rows;
    int cols;
    
    int matrix[MAX_SIZE][MAX_SIZE] = {0};
    
    printf("Enter matrix dimensions (rows cols): ");
    scanf("%d%d", &rows, &cols);
    
    // TODO: get the numbers for the matrix in
    int i = 0;
    while (i < rows) {
        printf("Enter %d values for row %d: ", cols, i + 1);
        int j = 0;
        while (j < cols) {
            scanf("%d", &(matrix[i][j]));
            j++;
        }
        i++;
    }
    
    
    int scalar;
    printf("Enter scalar to multiply the matrix by: ");
    scanf("%d", &scalar);
    
    printf("Matrix before multiplication:\n");
    print_matrix(rows, cols, matrix);
    
    scalar_multiply(rows, cols, matrix, scalar);
    
    printf("Matrix after multiplication:\n");
    print_matrix(rows, cols, matrix);
    
    return 0;
}

void scalar_multiply(int rows, int columns, int matrix[MAX_SIZE][MAX_SIZE],  int scalar) {
    // TODO: fill here to complete scalar multiplication
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            matrix[i][j] *= scalar;
            j++;
        }
        i++;
    }
}


void print_matrix(int rows, int columns, int matrix[MAX_SIZE][MAX_SIZE]) {
    // print the matrix
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            printf("%d ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
