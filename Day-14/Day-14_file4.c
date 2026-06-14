//WAP to find duplicates in array
#include <stdio.h>

int main()
{
    int n, i, j, arr[50];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The duplicate elements are: ");

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}