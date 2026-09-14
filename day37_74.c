/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];
        
        // Read the elements into the original matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        
        // Print the transposed matrix by swapping the iteration order
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                printf("%d", matrix[i][j]);
                // Add a space between numbers, but not at the end of the row
                if (i < rows - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}