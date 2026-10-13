// Q97: Print the initials of a name.

#include <stdio.h>

int main()
{
    char name[1000];

    fgets(name, sizeof(name), stdin);

    if(name[0] != ' ' && name[0] != '\n')
        printf("%c ", name[0]);

    for(int i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
            printf("%c ", name[i]);
    }

    return 0;
}