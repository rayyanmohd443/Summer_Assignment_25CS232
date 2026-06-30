//WAP to create mini library system
#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[50];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter book ID: ");
        scanf("%d", &book[i].bookId);

        getchar();

        printf("Enter title: ");
        fgets(book[i].title, sizeof(book[i].title), stdin);

        printf("Enter author: ");
        fgets(book[i].author, sizeof(book[i].author), stdin);
    }

    printf("\nLibrary Records\n");

    for (i=0; i<n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: %d\n", book[i].bookId);
        printf("Title: %s", book[i].title);
        printf("Author: %s", book[i].author);
    }

    return 0;
}