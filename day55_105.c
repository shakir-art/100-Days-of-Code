/*
Q105: Take an integer array nums of size n and print the majority element.
The majority element appears strictly more than n/2 times.
Print -1 if no majority element exists.
*/

#include <stdio.h>

int main()
{
    int n;
    int nums[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }

        if(count > n / 2)
        {
            printf("%d", nums[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}