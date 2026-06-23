//WAP to find maximum occurring character
#include <stdio.h>

int main()
{
    int i, max=0;
    char maxChar;
    char str[50];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    for (i=0; i<256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("The maximum occurring character is %c and its frequency is %d\n", maxChar, max);

    return 0;
}