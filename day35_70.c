/* Q70: Rotate an array to the right by k positions. */
#include <stdio.h>

// Helper function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        if (scanf("%d", &k) == 1) {
            k = k % n; // Avoid unnecessary full rotations
            if (k < 0) k += n; 
            
            // O(N) time and O(1) space optimal rotation algorithm
            reverse(arr, 0, n - 1);       // Reverse whole array
            reverse(arr, 0, k - 1);       // Reverse first k elements
            reverse(arr, k, n - 1);       // Reverse remaining elements
            
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        }
    }
    return 0;
}
