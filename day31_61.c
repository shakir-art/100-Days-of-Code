/* Q61: Search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int n, key, found = -1;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        if (scanf("%d", &key) == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    found = i;
                    break;
                }
            }
            if (found != -1) printf("Found at index %d\n", found);
            else printf("Not found\n");
        }
    }
    return 0;
}
