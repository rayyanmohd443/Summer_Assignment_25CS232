//WAP to create quiz application
#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("1. What is the tallest mountain in the world?\n");
    printf("1. K2\n");
    printf("2. Mount Everest\n");
    printf("3. Kanchenjunga\n");
    printf("4. Makalu\n");
    printf("Enter answer: ");

    scanf("%d", &answer);

    if (answer == 2)
    {
        score++;
    }

    printf("\n2. What is the powerhouse of the cell?\n");
    printf("1. Nucleus\n");
    printf("2. Ribosome\n");
    printf("3. Mitochondria\n");
    printf("4. Lysosome\n");
    printf("Enter answer: ");

    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }

    printf("\n3. How many continents are there in the world?\n");
    printf("1. 7\n");
    printf("2. 8\n");
    printf("3. 6\n");
    printf("4. 9\n");
    printf("Enter answer: ");

    scanf("%d", &answer);

    if (answer == 1)
    {
        score++;
    }

    printf("\nThe final Score is %d/3\n", score);

    return 0;
}