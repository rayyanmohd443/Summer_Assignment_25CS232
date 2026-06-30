//WAP to create student record system using arrays and strings
#include <stdio.h>

int main()
{
    int n, i, rollNo[50];
    char name[50][50];
    float marks[50];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &rollNo[i]);

        getchar();

        printf("Enter name: ");
        fgets(name[i], sizeof(name[i]), stdin);

        printf("Enter marks: ");
        scanf("%f", &marks[i]);

        getchar();
    }

    printf("\nStudent Records\n");

    for (i=0; i<n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", rollNo[i]);
        printf("Name: %s", name[i]);
        printf("Marks: %.2f\n", marks[i]);
    }

    return 0;
}