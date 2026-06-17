//WAP to Union of arrays
#include <stdio.h>

int main()
{
    int i, j, k=0, n1, n2, found, arr1[50], arr2[50], arr3[50];

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for (i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[k++] = arr1[i];
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for (i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);

        found = 0;
        for (j=0; j<k; j++)
        {
            if (arr2[i] == arr3[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            arr3[k++] = arr2[i];
        }
    }

    printf("The union of arrays is:\n");
    for (i=0; i<k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}