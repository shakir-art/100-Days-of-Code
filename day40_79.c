// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main()
{
    int r, c, a[100][100];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int k = 0; k < r + c - 1; k++)
    {
        for(int i = 0; i < r; i++)
        {
            int j = k - i;

            if(j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}