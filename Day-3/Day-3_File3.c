#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The GCD is %d\n", a);

    return 0;
}