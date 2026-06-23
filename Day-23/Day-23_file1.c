//WAP to find first non-repeating character
#include <stdio.h>

int main()
{
    int i, j, count;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        count = 0;

        for (j=0; str[j]!='\0' && str[j]!='\n'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("The first non-repeating character is %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}