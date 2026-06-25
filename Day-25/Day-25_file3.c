//WAP to sort names alphabetically
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char names[10][50], temp[50];

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter names:\n");

    for (i=0; i<n; i++)
    {
        fgets(names[i], sizeof(names[i]), stdin);
    }

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-1-i; j++)
        {
            if (strcmp(names[j], names[j+1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    printf("The names in alphabetical order:\n");

    for (i=0; i<n; i++)
    {
        printf("%s", names[i]);
    }

    return 0;
}