//WAP to create bank account system
#include <stdio.h>

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[50];
    int n, i;

    printf("Enter the number of accounts: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nAccount %d\n", i + 1);

        printf("Enter account number: ");
        scanf("%d", &a[i].accountNo);

        getchar();

        printf("Enter account holder name: ");
        fgets(a[i].name, sizeof(a[i].name), stdin);

        printf("Enter balance: ");
        scanf("%f", &a[i].balance);

        getchar();
    }

    printf("\nAccount Details\n");

    for (i=0; i<n; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number: %d\n", a[i].accountNo);
        printf("Name: %s", a[i].name);
        printf("Balance: %.2f\n", a[i].balance);
    }

    return 0;
}