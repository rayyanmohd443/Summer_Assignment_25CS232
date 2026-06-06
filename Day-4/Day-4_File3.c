//WAP to check if the number is Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, temp2, sum=0, digits=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        temp2 = temp % 10;
        sum += round(pow(temp2, digits));
        temp /= 10;
    }

    if (sum == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }

    return 0;
}