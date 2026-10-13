/*
Q111: Write a program to take an integer array arr
and an integer k as inputs.
Find the first negative integer in each subarray of size k.
If no negative exists, print 0.
Print results separated by spaces.
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
        int firstNegative = 0;

        for(int j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if(i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}