/*
Q102: Take a sorted array arr[] and an integer x as input.
Find the 0-based index of the smallest element greater than or equal to x.
If there are multiple occurrences, return the first occurrence.
If no such element exists, print -1.
*/

#include <stdio.h>

int main()
{
    int n, x;
    int arr[1000];
    int index = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}