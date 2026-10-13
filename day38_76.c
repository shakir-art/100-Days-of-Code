// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("False");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}