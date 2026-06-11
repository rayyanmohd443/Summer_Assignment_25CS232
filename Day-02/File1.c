//WAP to find the sum of digits of a number
#include <stdio.h>

int main()
{
    int n, digit, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("The sum of digits is %d\n", sum);
    
    return 0;
}