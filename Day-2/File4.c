//WAP to check whether the given number is palindrome or not
#include <stdio.h>

int main()
{
    int n, original, digit, rev=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (rev == original)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }

    return 0;
}