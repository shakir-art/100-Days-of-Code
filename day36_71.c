/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];
        
        // Read the elements into the matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        
        // Print the matrix in a grid format
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d", matrix[i][j]);
                // Add a space between numbers, but not at the end of the row
                if (j < cols - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Invalid matrix dimensions.\n");
    }
    
    return 0;
}
