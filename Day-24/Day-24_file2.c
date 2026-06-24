//WAP to compress a string
#include <stdio.h>

int main()
{
    int i, count;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        count = 1;

        while (str[i] == str[i+1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}