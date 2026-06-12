//WAP to write a function for Fibonacci
#include <stdio.h>

int fib(int n)
{
    int a=0, b=1, c;

    if (n == 0)
    {
        return a;
    }
    else if (n == 1)
    {
        return b;
    }
    else
    {
        for (int i=2; i<=n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        
        return b;
    }
}

int main()
{
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The Fibonacci term is %d", fib(n));
}