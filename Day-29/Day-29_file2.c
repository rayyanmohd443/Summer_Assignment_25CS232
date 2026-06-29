//WAP to create menu-driven array operations system
#include <stdio.h>

int main()
{
    int n, i, arr[50], choice, sum=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Array Elements: ");

                for (i=0; i<n; i++)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");
                break;

            case 2:
                sum = 0;

                for (i=0; i<n; i++)
                {
                    sum += arr[i];
                }

                printf("Sum = %d\n", sum);
                break;

            case 3:
            {
                int largest = arr[0];

                for (i=1; i<n; i++)
                {
                    if (arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }

                printf("Largest Element = %d\n", largest);
                break;
            }

            case 4:
            {
                int smallest = arr[0];

                for (i=1; i<n; i++)
                {
                    if (arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }

                printf("Smallest Element = %d\n", smallest);
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
}