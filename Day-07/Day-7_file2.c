//WAP for recursive Fibonacci
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The fibonacci term is %d\n", fibonacci(n));

    return 0;
}