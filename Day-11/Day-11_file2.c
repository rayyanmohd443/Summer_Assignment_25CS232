//WAP to write a function to find the maximum
#include <stdio.h>

int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    int a,b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("The maximum is %d\n", max(a,b));
}