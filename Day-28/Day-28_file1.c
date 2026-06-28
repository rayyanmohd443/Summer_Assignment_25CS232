//WAP to create library management system
#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[50];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter book ID: ");
        scanf("%d", &b[i].bookId);

        getchar();

        printf("Enter book title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);

        printf("Enter author name: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
    }

    printf("\nBook Details\n");

    for (i=0; i<n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: %d\n", b[i].bookId);
        printf("Title: %s", b[i].title);
        printf("Author: %s", b[i].author);
    }

    return 0;
}