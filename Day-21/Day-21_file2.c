//WAP to reverse a string
#include <stdio.h>

int main()
{
    int length = 0, i;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("The reversed string is: ");

    for (i=length-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}