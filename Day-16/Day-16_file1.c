//WAP to find missing number in array
#include <stdio.h>

int main()
{
    int n, i, arr[50], sum=0, total, missing;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for (i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}