//WAP to count words in a sentence
#include <stdio.h>

int main()
{
    int i=0, count=0;
    char str[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != '\n')
    {
        count = 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
        {
            count++;
        }

        i++;
    }

    printf("The number of words are %d\n", count);

    return 0;
}