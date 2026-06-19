//WAP to transpose matrix
#include <stdio.h>

int main()
{
    int rows, cols, i, j, a[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter the matrix:\n");
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose matrix:\n");
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}