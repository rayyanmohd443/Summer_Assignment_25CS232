//WAP to move zeroes to end
#include <stdio.h>

int main()
{
    int n, i, j=0, arr[50], temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n; i++)
    {
        if (arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes to the end:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}