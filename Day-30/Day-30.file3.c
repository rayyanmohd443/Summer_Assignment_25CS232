//WAP to create mini employee management system
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[50];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        getchar();

        printf("Enter employee name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        getchar();
    }

    printf("\nEmployee Records\n");

    for (i=0; i<n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].id);
        printf("Name: %s", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}