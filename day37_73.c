/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];
        long long row_sums[rows]; // Using long long to prevent overflow
        
        // Read elements and calculate row sums
        for (int i = 0; i < rows; i++) {
            row_sums[i] = 0; // Initialize sum for the current row
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
                row_sums[i] += matrix[i][j];
            }
        }
        
        // Print the array containing row sums
        for (int i = 0; i < rows; i++) {
            printf("%lld", row_sums[i]);
            // Add a space between numbers, but not after the last one
            if (i < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}