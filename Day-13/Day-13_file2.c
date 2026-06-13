//WAP to find sum and average of array.
#include <stdio.h>

int main()
{
    int n, i, arr[50], sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("The sum is %d and the average is %.2f\n", sum, avg);

    return 0;
}