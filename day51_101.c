// Q101: Find the first and last occurrence of target in a sorted array.
// Print -1 if the target is not present.

#include <stdio.h>

int main()
{
    int n, target;
    int a[1000];
    int first = -1, last = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    if(first == -1)
        printf("-1");
    else
        printf("%d %d", first, last);

    return 0;
}