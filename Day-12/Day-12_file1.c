//WAP to write a function to check palindrome
#include <stdio.h>

int pal(int n)
{
    int og, digit, rev=0;

    og=n;
    
    while (n>0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(rev==og)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (pal(n))
    {
        printf("The number %d is a palindrome\n", n);
    }
    else
    {
        printf("The number %d is not a palindrome\n", n);
    }

    return 0;
}