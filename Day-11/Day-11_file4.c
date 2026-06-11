//WAP to write a function to find the factorial
#include <stdio.h>

int fact(int n)
{
    int f=1;
    
    if (n<2)
    {
        return 1; 
    }
    
    for (int i=1; i<=n; i++)
    {
        f *= i;
    }
    return f;
}


int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The factorial is %d\n", fact(n));

    return 0;
}