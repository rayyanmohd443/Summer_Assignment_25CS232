//WAP to find character frequency
#include <stdio.h>

int main()
{
    int i, count=0;
    char str[50], ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character: ");
    scanf("%c", &ch);

    for (i=0; str[i]!='\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("The frequency of '%c' is %d\n", ch, count);

    return 0;
}