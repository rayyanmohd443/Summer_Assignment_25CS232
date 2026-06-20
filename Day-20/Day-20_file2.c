//WAP to check symm matrix
#include <stdio.h>

int main()
{
    int n, i, j, symm = 1, a[10][10];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symm = 0;
                break;
            }
        }
    }

    if (symm)
    {
        printf("Matrix is symm\n");
    }
    else
    {
        printf("Matrix is not symm\n");
    }

    return 0;
}