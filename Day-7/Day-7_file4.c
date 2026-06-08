//WAP for recursive reverse number
#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    
    rev = rev*10 + n % 10;
    n /= 10;
    
    return reverse(n, rev);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversed number is %d\n", reverse(n, 0));

    return 0;
}