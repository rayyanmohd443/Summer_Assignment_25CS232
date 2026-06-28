//WAP to create contact management system
#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[50];
};

int main()
{
    struct Contact c[50];
    int n, i;

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);

        printf("Enter phone number: ");
        fgets(c[i].phone, sizeof(c[i].phone), stdin);
    }

    printf("\nContact Details\n");

    for (i=0; i<n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name: %s", c[i].name);
        printf("Phone Number: %s", c[i].phone);
    }

    return 0;
}