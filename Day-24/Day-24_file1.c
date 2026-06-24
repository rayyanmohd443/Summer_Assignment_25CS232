//WAP to check string rotation
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], temp[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strlen(str1) == strlen(str2) && strstr(temp, str2))
    {
        printf("Strings are rotations\n");
    }
    else
    {
        printf("Strings are not rotations\n");
    }

    return 0;
}