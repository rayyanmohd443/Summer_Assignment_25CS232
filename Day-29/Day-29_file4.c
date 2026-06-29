//WAP to create inventory management system
#include <stdio.h>

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
};

int main()
{
    struct Item item[50];
    int n, i;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    getchar();

    for (i=0; i<n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter item ID: ");
        scanf("%d", &item[i].itemId);

        getchar();

        printf("Enter item name: ");
        fgets(item[i].itemName, sizeof(item[i].itemName), stdin);

        printf("Enter quantity: ");
        scanf("%d", &item[i].quantity);

        getchar();
    }

    printf("\nInventory Details\n");

    for (i=0; i<n; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("Item ID: %d\n", item[i].itemId);
        printf("Item Name: %s", item[i].itemName);
        printf("Quantity: %d\n", item[i].quantity);
    }

    return 0;
}