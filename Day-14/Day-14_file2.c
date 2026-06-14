//WAP to count the frequency of an element
#include <stdio.h>

int main()
{
    int n, i, arr[50], elem, count=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &elem);

    for (i=0; i<n; i++)
    {
        if (arr[i] == elem)
        {
            count++;
        }
    }

    printf("The frequency of the element %d is %d\n", elem, count);

    return 0;
}