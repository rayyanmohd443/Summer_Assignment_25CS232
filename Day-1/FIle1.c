//WAP a program to calculate the sum of first N natural numbers
#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}


//WAP to print the multiplication table of a given number
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The multiplication table of %d is:\n", num);

    for (int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


//WAP to find the factorial of a given number
#include <stdio.h>

int main()
{
    int n, fact=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}


//WAP to count digits in a number
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }

    printf("The number of digits in this number are %d\n", count);

    return 0;
}