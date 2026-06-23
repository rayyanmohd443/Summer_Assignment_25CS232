//WAP to check anagram strings
#include <stdio.h>

int main()
{
    int i, ana=1, freq1[256]={0}, freq2[256]={0};
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i=0; str1[i]!='\0' && str1[i]!='\n'; i++)
    {
        freq1[(unsigned char)str1[i]]++;
    }

    for (i=0; str2[i]!='\0' && str2[i]!='\n'; i++)
    {
        freq2[(unsigned char)str2[i]]++;
    }

    for (i=0; i<256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            ana = 0;
            break;
        }
    }

    if (ana)
    {
        printf("Strings are anagrams\n");
    }
    else
    {
        printf("Strings are not anagrams\n");
    }

    return 0;
}