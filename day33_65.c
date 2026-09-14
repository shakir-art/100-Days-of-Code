/* Q65: Search in a sorted array using binary search. */
#include <stdio.h>

int main() {
    int n, key;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
        if (scanf("%d", &key) == 1) {
            int low = 0, high = n - 1, found = -1;
            
            // O(log N) Binary Search Algorithm
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == key) {
                    found = mid;
                    break;
                } else if (arr[mid] < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            
            if (found != -1) printf("Found at index %d\n", found);
            else printf("Not found\n");
        }
    }
    return 0;
}
