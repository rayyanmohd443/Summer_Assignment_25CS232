// WAP to find x^n without using pow()
#include <stdio.h>

int main()
{
    int x, n, i, ans=1;

    printf("Enter the base: ");
    scanf("%d", &x);

    printf("Enter the exponent: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        ans *= x;
    }

    printf("%d^%d is %d\n", x, n, ans);

    return 0;
}