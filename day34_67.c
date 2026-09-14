/* Q67: Insert an element in an array at a given position (0-based index). */
#include <stdio.h>

int main() {
    int n, pos, element;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n + 1];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        if (scanf("%d %d", &pos, &element) == 2) {
            if (pos < 0 || pos > n) {
                printf("Invalid position\n");
            } else {
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = element;
                
                for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
                printf("\n");
            }
        }
    }
    return 0;
}
