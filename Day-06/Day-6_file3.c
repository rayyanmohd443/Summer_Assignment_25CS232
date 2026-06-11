//WAP to count the set bits in a number
#include <stdio.h>

int main()
{
    int bi, digit, count=0;

    printf("Enter a binary number: ");
    scanf("%d", &bi);

    while (bi > 0)
    {
        digit = bi % 10;
        if (digit == 1)
        {
            count++;
        }
        bi /= 10;
    }

    printf("The number of set bits are %d\n", count);

    return 0;
}