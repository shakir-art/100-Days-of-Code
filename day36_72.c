/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/

#include <stdio.h>

int main() {
    int rows, cols;
    long long sum = 0; // Using long long to prevent overflow with large values
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];
        
        // Read elements and calculate the sum simultaneously
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
                sum += matrix[i][j];
            }
        }
        
        // Print the final sum matching the expected output format
        printf("%lld\n", sum);
    }
    
    return 0;
}
