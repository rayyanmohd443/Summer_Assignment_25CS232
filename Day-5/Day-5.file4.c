// WAP to find the largest prime factor of a number
#include <stdio.h>

int main()
{
    int n, i, prime=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++)
    {
        while (n % i == 0)
        {
            prime = i;
            n /= i;
        }
    }

    printf("The largest prime factor is %d\n", prime);

    return 0;
}