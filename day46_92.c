// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' &&
           freq[str[i] - 'a'] > 1)
        {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}