// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main()
{
    int n;
    int a[100][100];
    int sum = 0;

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
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}