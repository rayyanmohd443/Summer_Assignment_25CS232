//WAP to remove duplicate characters
#include <stdio.h>

int main()
{
    int i, j, dupl;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i=0; str[i]!='\0'; i++)
    {
        dupl = 0;

        for (j=0; j<i; j++)
        {
            if (str[i] == str[j])
            {
                dupl = 1;
                break;
            }
        }

        if (!dupl)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}