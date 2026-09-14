/* Q68: Delete an element from an array (by 0-based index). */
#include <stdio.h>

int main() {
    int n, pos;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        if (scanf("%d", &pos) == 1) {
            if (pos < 0 || pos >= n) {
                printf("Invalid position\n");
            } else {
                // Shift elements left to overwrite the target
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--; // Decrease logical size of array
                
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
            }
        }
    }
    return 0;
}
