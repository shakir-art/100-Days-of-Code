// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[500], b[500], temp[1000];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if(strlen(a) != strlen(b))
    {
        printf("False");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b) != NULL)
        printf("True");
    else
        printf("False");

    return 0;
}