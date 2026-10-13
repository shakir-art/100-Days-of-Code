/*
Q106: Find the next greater element for every element of an array.
The next greater element is the nearest greater element on the right.
If no greater element exists, print -1.
Print answers in comma-separated format.
Use brute force (nested loops).
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        int next = -1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if(i != n - 1)
            printf(",");
    }

    return 0;
}