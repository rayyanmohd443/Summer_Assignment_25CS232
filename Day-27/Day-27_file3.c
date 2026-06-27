//WAP to create salary management system
#include <stdio.h>

struct Employee
{
    float basic, hra, da, gross;
};

int main()
{
    int n, i;
    struct Employee emp[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        printf("Enter basic salary of Employee %d: ", i+1);
        scanf("%f", &emp[i].basic);

        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;

        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\nEmployee Salaries: \n");
    for (i=0; i<n; i++)
    {
        
        printf("\nBasic Salary = %.2f\n", emp[i].basic);
        printf("House Rent Allowance = %.2f\n", emp[i].hra);
        printf("Dearness Allowance = %.2f\n", emp[i].da);
        printf("Gross Salary = %.2f\n", emp[i].gross);
    }

    return 0;
}