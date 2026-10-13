// Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int flag = 1;

    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    if(length > 0 && str[length - 1] == '\n')
        length--;

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}