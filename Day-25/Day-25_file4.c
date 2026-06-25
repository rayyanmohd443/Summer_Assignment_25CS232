//WAP to sort words by length
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char words[10][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    printf("Enter words:\n");

    for (i=0; i<n; i++)
    {
        fgets(words[i], sizeof(words[i]), stdin);
    }

    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-1-i; j++)
        {
            if (strlen(words[j]) > strlen(words[j+1]))
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");

    for (i=0; i<n; i++)
    {
        printf("%s", words[i]);
    }

    return 0;
}