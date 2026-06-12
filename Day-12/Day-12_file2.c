//WAP to write a function to check Armstrong number
#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
     int temp, temp2, sum=0, digits=0;
        
    temp = n;

    while (temp>0)
    {
        digits++;
        temp /= 10;
    }
    
    temp = n;

    while (temp>0)
    {
        temp2 = temp % 10;
        sum += round(pow(temp2, digits));
        temp /= 10;
    }

    if (sum == n)
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
    
    printf("Enter first number: ");
    scanf("%d", &n);
    
    if (armstrong(n))
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }

    return 0;
}