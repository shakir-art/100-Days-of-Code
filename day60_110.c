/*
Q110: Write a program to take an integer array arr
and an integer k as inputs.
Find the maximum element in each subarray of size k.
Print the maximum elements separated by spaces.
*/

#include <stdio.h>

int main()
{
    int n, k, arr[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    for(int i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        for(int j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        if(i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}