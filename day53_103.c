/*
Q103: Take an array of integers as input and calculate its pivot index.
The pivot index is the index where the sum of elements to the left
is equal to the sum of elements to the right.
Print the leftmost pivot index.
If no such index exists, print -1.
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[1000];
    int total = 0, left = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int right = total - left - arr[i];

        if(left == right)
        {
            printf("%d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("-1");

    return 0;
}