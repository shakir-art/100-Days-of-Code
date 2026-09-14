/* Q63: Merge two arrays. */
#include <stdio.h>

int main() {
    int n1, n2;
    
    // Read first array
    if (scanf("%d", &n1) == 1 && n1 > 0) {
        int arr1[n1];
        for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
        
        // Read second array
        if (scanf("%d", &n2) == 1 && n2 > 0) {
            int arr2[n2];
            for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
            
            // Create merged array
            int merged[n1 + n2];
            for (int i = 0; i < n1; i++) merged[i] = arr1[i];
            for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
            
            // Print merged array
            for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
            printf("\n");
        }
    }
    return 0;
}
