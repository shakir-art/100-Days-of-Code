// Q85: Reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int length;

    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    if(length > 0 && str[length - 1] == '\n')
        length--;

    for(int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}