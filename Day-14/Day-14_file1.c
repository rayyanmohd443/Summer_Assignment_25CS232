//WAP to Linear search
#include <stdio.h>

int main()
{
    int n, i, arr[50], elem, found=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &elem);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == elem)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("%d found at location %d\n", elem, i + 1);
    } 
    else
    {
        printf("%d not found in the array\n", elem);    
    }

    return 0;
}