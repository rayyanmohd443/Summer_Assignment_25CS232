#include <stdio.h>

int main()
{
    int num1, num2, i, j, isPrime;

    printf("Enter the lower limit: ");
    scanf("%d", &num1);

    printf("Enter the upper limit: ");
    scanf("%d", &num2);

    printf("The prime numbers between %d and %d are:\n", num1, num2);

    for (i=num1; i<=num2; i++)
    {
        if (i<=1)
            continue;

        isPrime = 1;

        for (j=2; j<=i/2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}