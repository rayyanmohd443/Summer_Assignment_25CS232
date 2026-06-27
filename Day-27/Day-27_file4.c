//WAP to create marksheet generation system
#include <stdio.h>

struct Marksheet
{
    int rollNo, m1, m2, m3, m4, m5, total;
    float percentage;
};

int main()
{
    int n, i;
    struct Marksheet ms[100];

    printf("Enter number of Marksheets: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter roll number for Student %d: ", i+1);
        scanf("%d", &ms[i].rollNo);

        printf("Enter marks of 5 subjects:\n");
        scanf("%d%d%d%d%d", &ms[i].m1, &ms[i].m2, &ms[i].m3, &ms[i].m4, &ms[i].m5);

        ms[i].total = ms[i].m1 + ms[i].m2 + ms[i].m3 + ms[i].m4 + ms[i].m5;
        ms[i].percentage = (float)ms[i].total / 5;
    }

    printf("\nMarksheet Record: \n");
    for (i=0; i<n; i++)
    {
        printf("\nRoll No: %d\n", ms[i].rollNo);
        printf("Total Marks = %d\n", ms[i].total);
        printf("Percentage = %.2f\n", ms[i].percentage);

        printf("Grade: ");
        if (ms[i].percentage >= 90)
        {
           printf("A\n");
        }
        else if (ms[i].percentage >= 75)
        {
            printf("B\n");
        }
        else if (ms[i].percentage >= 60)
        {
            printf("C\n");
        }
        else if (ms[i].percentage >= 40)
        {
            printf("D\n");
        }
        else
        {
            printf("Fail\n");
        }
    }

    return 0;
}