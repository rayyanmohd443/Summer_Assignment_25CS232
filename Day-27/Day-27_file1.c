//WAP to create student record management system
#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n, i;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        getchar();

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Record: \n");
    for (i=0; i<n; i++)
    {
        
        printf("\nRoll Number: %d\n", s[i].rollNo);
        printf("Name: %s", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}