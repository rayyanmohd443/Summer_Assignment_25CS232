//WAP to merge two sorted arrays
#include <stdio.h>

int main()
{
    int n1, n2, i, j, k = 0, arr1[50], arr2[50], arr3[100];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for (i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for (i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    printf("Merged array:\n");

    for (i=0; i<k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}