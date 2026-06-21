//WAP to count vow and cons
#include <stdio.h>

int main()
{
    int i=0, vow=0, cons=0;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||
                str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }

        i++;
    }

    printf("The number of vowels are %d and consonants are %d\n", vow, cons);

    return 0;
}