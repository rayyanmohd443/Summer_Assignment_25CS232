//WAP to find maximum frequency element
#include <stdio.h>

int main()
{
    int n, i, j, arr[50], freq = 0, max, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n; i++)
    {
        count = 1;

        for (j=i+1; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > freq)
        {
            freq = count;
            max = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", max);
    printf("Frequency = %d\n", freq);

    return 0;
}