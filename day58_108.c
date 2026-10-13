/*
Q108: Take an integer array nums.
Print an array answer such that answer[i] is equal to the product
of all elements of nums except nums[i].

Follow-up:
Solve in O(n) time without using division.
*/

#include <stdio.h>

int main()
{
    int n;
    int nums[1000];
    int answer[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int prefix = 1;

    for(int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i != n - 1)
            printf(" ");
    }

    return 0;
}