//WAP to create video game collection manager
#include <stdio.h>
#include <string.h>

struct Game
{
    char name[50];
    char genre[50];
    int hoursPlayed;
};

void addGames(struct Game game[], int n)
{
    int i;

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nGame %d\n", i + 1);

        printf("Enter game name: ");
        fgets(game[i].name, sizeof(game[i].name), stdin);

        printf("Enter genre: ");
        fgets(game[i].genre, sizeof(game[i].genre), stdin);

        printf("Enter hours played: ");
        scanf("%d", &game[i].hoursPlayed);

        getchar();
    }
}

void displayGames(struct Game game[], int n)
{
    int i;

    printf("\nGame Collection\n");

    for (i=0; i<n; i++)
    {
        printf("\nGame %d\n", i + 1);
        printf("Name: %s", game[i].name);
        printf("Genre: %s", game[i].genre);
        printf("Hours Played: %d\n", game[i].hoursPlayed);
    }
}

void searchGame(struct Game game[], int n)
{
    char search[50];
    int i, found = 0;

    getchar();

    printf("Enter game name to search: ");
    fgets(search, sizeof(search), stdin);

    for (i=0; i<n; i++)
    {
        if (strcmp(game[i].name, search) == 0)
        {
            printf("\nGame Found\n");
            printf("Name: %s", game[i].name);
            printf("Genre: %s", game[i].genre);
            printf("Hours Played: %d\n", game[i].hoursPlayed);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Game not found\n");
    }
}

void findMostPlayed(struct Game game[], int n)
{
    int i, index = 0;

    for (i=1; i<n; i++)
    {
        if (game[i].hoursPlayed > game[index].hoursPlayed)
        {
            index = i;
        }
    }

    printf("\nMost Played Game\n");
    printf("Name: %s", game[index].name);
    printf("Genre: %s", game[index].genre);
    printf("Hours Played: %d\n", game[index].hoursPlayed);
}

int main()
{
    struct Game game[50];
    int n, choice;

    printf("Enter the number of games: ");
    scanf("%d", &n);

    addGames(game, n);

    do
    {
        printf("\n===== Video Game Collection Manager =====\n");
        printf("1. Display Games\n");
        printf("2. Search Game\n");
        printf("3. Find Most Played Game\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayGames(game, n);
                break;

            case 2:
                searchGame(game, n);
                break;

            case 3:
                findMostPlayed(game, n);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}