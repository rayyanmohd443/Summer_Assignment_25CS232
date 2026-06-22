//WAP to check pal string
#include <stdio.h>

int main()
{
    int length=0, i, pal=1;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i=0; i<length/2; i++)
    {
        if (str[i] != str[length-1-i])
        {
            pal = 0;
            break;
        }
    }

    if (pal)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }

    return 0;
}