// Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}