/*
Q107: Find the previous greater element for every element of an array.
The previous greater element is the nearest greater element on the left.
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
        int previous = -1;

        for(int j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);

        if(i != n - 1)
            printf(",");
    }

    return 0;
}