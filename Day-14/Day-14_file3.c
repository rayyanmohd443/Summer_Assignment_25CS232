//WAP to find the second largest element
#include <stdio.h>

int main()
{
    int n, i, arr[50], largest, largest2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = largest2 = arr[0];

    for (i=1; i<n; i++)
    {
        if (arr[i] > largest)
        {
            largest2 = largest;
            largest = arr[i];
        }
        else if (arr[i] > largest2 && arr[i] != largest)
        {
            largest2 = arr[i];
        }
    }

    printf("The second largest element ia %d\n", largest2);

    return 0;
}