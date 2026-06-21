//WAP to find string length without strlen()
#include <stdio.h>

int main()
{
    int length = 0;
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}