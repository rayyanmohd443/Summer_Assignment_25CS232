//WAP to create ticket booking system
#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char passengerName[50];
    char destination[50];
};

int main()
{
    struct Ticket t[50];
    int n, i;

    printf("Enter the number of tickets: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nTicket %d\n", i + 1);

        printf("Enter ticket number: ");
        scanf("%d", &t[i].ticketNo);

        getchar();

        printf("Enter passenger name: ");
        fgets(t[i].passengerName, sizeof(t[i].passengerName), stdin);

        printf("Enter destination: ");
        fgets(t[i].destination, sizeof(t[i].destination), stdin);
    }

    printf("\nTicket Details\n");

    for (i=0; i<n; i++)
    {
        printf("\nTicket %d\n", i + 1);
        printf("Ticket Number: %d\n", t[i].ticketNo);
        printf("Passenger Name: %s", t[i].passengerName);
        printf("Destination: %s", t[i].destination);
    }

    return 0;
}