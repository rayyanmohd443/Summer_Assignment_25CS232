// WAP to convert binary to decimal
#include <stdio.h>

int main()
{
    int bi, digit, dec=0, place=1;

    printf("Enter a binary number: ");
    scanf("%d", &bi);

    while (bi > 0)
    {
        digit = bi % 10;
        dec += digit * place;
        place *= 2;
        bi /= 10;
    }

    printf("The number in binary is %d\n", dec);

    return 0;
}