//WAP for recursive sum of digits
#include <stdio.h>

int digitsum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + digitsum(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of digits are %d\n", digitsum(n));

    return 0;
}