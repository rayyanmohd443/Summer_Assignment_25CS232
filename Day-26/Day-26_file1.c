#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int secret = 1 + rand() % 100;  // 1-100
    int guess;

    do
    {
        printf("Guess the number (1-100): ");

        if (scanf("%d", &guess) != 1)
        {
            printf("Please enter a valid number.\n");
            return 1;
        }

        if (guess < secret)
            printf("Too low\n");
        else if (guess > secret)
            printf("Too high\n");

    } while (guess != secret);

    printf("Correct guess!\n");

    return 0;
}