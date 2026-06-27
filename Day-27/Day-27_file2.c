//WAP to create employee management system
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    int n, i;
    struct Employee e[100];

    printf("Enter number of Employees: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter employee ID for Employee %d: ", i+1);
        scanf("%d", &e[i].id);

        getchar();

        printf("Enter employee name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Details\n");
    for (i=0; i<n; i++)
    {
        printf("\nID: %d\n", e[i].id);
        printf("Name: %s", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}