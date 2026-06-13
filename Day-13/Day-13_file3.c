//WAP to find largest and smallest element
#include <stdio.h>

int main()
{
    int n, i, arr[50], lrg, sml;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    lrg = sml = arr[0];

    for (i=1; i<n; i++)
    {
        if (arr[i] > lrg)
        {
            lrg = arr[i];
        }

        if (arr[i] < sml)
        {
            sml = arr[i];
        }
    }

    printf("largest element = %d\n", lrg);
    printf("smallest element = %d\n", sml);

    return 0;
}