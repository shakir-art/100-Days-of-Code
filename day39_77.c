// Q77: Check if all elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main()
{
    int n;
    int a[100][100];
    int distinct = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}