//WAP to find the nth Fibonacci term
#include <stdio.h>

int main()
{
    int n, i, a=0, b=1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("The Fibonacci term is %d", a);
    }
    else if (n == 1)
    {
        printf("The Fibonacci term is %d", b);
    }
    else
    {
        for (i=2; i<=n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The Fibonacci term is %d", b);
    }

    return 0;
}