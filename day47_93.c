// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    int freq[256] = {0};

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    for(int i = 0; a[i] != '\0'; i++)
        freq[(unsigned char)a[i]]++;

    for(int i = 0; b[i] != '\0'; i++)
        freq[(unsigned char)b[i]]--;

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("False");
            return 0;
        }
    }

    printf("True");

    return 0;
}