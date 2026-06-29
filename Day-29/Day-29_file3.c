//WAP to create menu-driven string operations system
#include <stdio.h>

int main()
{
    char str[50];
    int choice, length, i, palindrome;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do
    {
        printf("\n1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("String: %s", str);
                break;

            case 2:
                length = 0;

                while (str[length] != '\0' && str[length] != '\n')
                {
                    length++;
                }

                printf("Length = %d\n", length);
                break;

            case 3:
                length = 0;

                while (str[length] != '\0' && str[length] != '\n')
                {
                    length++;
                }

                printf("Reversed String: ");

                for (i=length-1; i>=0; i--)
                {
                    printf("%c", str[i]);
                }

                printf("\n");
                break;

            case 4:
                length = 0;

                while (str[length] != '\0' && str[length] != '\n')
                {
                    length++;
                }

                palindrome = 1;

                for (i=0; i<length/2; i++)
                {
                    if (str[i] != str[length-1-i])
                    {
                        palindrome = 0;
                        break;
                    }
                }

                if (palindrome)
                {
                    printf("Palindrome String\n");
                }
                else
                {
                    printf("Not a Palindrome String\n");
                }

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}