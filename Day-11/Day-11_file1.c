//WAP to write a function to find them sum of two numbers
#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}


int main()
{
    int a,b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("The sum is %d\n", sum(a,b));

    return 0;
}