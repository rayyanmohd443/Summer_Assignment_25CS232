//WAP to find the product of the digits
#include <stdio.h>

int main()
{
    int n, digit, prod=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        prod *= digit;
        n /= 10;
    }

    printf("The product of the digits is %d\n", prod);

    return 0;
}