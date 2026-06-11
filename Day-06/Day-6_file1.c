// WAP to convert decimal to binary
#include <stdio.h>

int main()
{
    int n, bi=0, place=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        bi += (n % 2) * place;
        n /= 2;
        place *= 10;
    }

    printf("The number in binary is %d\n", bi);

    return 0;
}