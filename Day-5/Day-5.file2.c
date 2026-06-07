// WAP to check if a number is a strong number
#include <stdio.h>

int main()
{
    int n, i, temp, digit, sum=0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        fact = 1;

        for (i=1; i<=digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
    {
        printf("The number %d is a strong number\n", n);
    }
    else
    {
        printf("The number %d is not a strong number\n", n);
    }

    return 0;
}