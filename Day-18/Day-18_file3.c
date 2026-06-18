//WAP to Binary search
#include <stdio.h>

int main()
{
    int n, i, arr[50], s, low, high, mid, found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &s);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high)/2;

        if (arr[mid] == s)
        {
            found = 1;
            break;
        }
        else if (s < arr[mid])
        {
            high = mid - 1;
        }   
        else
        {
            low = mid + 1;
        }
    }

    if (found)
    {
        printf("%d found at location %d\n", s, mid + 1);
    }
    else
    {
        printf("%d not found\n", s);
    }

    return 0;
}