/* Q66: Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int n, element;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n + 1]; // Allocate extra space for the new element
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        if (scanf("%d", &element) == 1) {
            int i;
            // Shift elements greater than the target to the right
            for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
                arr[i + 1] = arr[i];
            }
            // Insert element
            arr[i + 1] = element;
            
            for (int j = 0; j <= n; j++) printf("%d ", arr[j]);
            printf("\n");
        }
    }
    return 0;
}