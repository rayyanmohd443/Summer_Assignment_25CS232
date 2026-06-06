//WAP to print Armstrong numbers in a range
#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, n, temp, digit, digits, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (n=start; n<=end; n++)
    {
        temp = n;
        digits = 0;
        sum = 0;

        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = n;

        while (temp != 0)
        {
            digit = temp % 10;
            sum += round(pow(digit, digits));
            temp /= 10;
        }

        if (sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}