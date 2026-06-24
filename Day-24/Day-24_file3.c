//WAP to find longest word
#include <stdio.h>

int main()
{
    int i=0, j=0, maxLen=0, start=0, len=0;
    char str[50], longest[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if (len > maxLen)
            {
                maxLen = len;

                for (j=0; j<len; j++)
                {
                    longest[j] = str[start+j];
                }

                longest[j] = '\0';
            }

            start = i + 1;
            len = 0;
        }
        else
        {
            len++;
        }

        if (str[i] == '\0')
        {
            break;
        }

        i++;
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}