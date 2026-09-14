/* Q69: Find the second largest element in an array. */
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        int max1 = arr[0];
        // Initialize to minimum possible integer value
        int max2 = -2147483648; 
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] < max1) {
                max2 = arr[i];
            }
        }
        
        if (max2 == -2147483648) {
            printf("No second largest element exists (all elements may be equal).\n");
        } else {
            printf("Second largest = %d\n", max2);
        }
    } else {
        printf("Array must have at least two elements.\n");
    }
    return 0;
}
