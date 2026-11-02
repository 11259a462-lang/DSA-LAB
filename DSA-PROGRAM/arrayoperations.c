#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE], n, i;
    int pos, item, key, found = 0;

    // Input
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }
    }

    // Display
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Insertion
    printf("\n\nEnter the position for insertion: ");
    if (scanf("%d", &pos) != 1)
    {
        printf("Invalid position!\n");
        return 1;
    }

    if (n >= MAX_SIZE)
    {
        printf("Array is full. Cannot insert!\n");
    }
    else if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        printf("Enter the element to insert: ");
        if (scanf("%d", &item) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = item;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    // Deletion
    printf("\n\nEnter the position for deletion: ");
    if (scanf("%d", &pos) != 1)
    {
        printf("Invalid position!\n");
        return 1;
    }

    if (n <= 0)
    {
        printf("Array is empty. Cannot delete!\n");
    }
    else if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    // Search
    printf("\n\nEnter the element to search: ");
    if (scanf("%d", &key) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    found = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    // Reverse
    printf("\nArray after reversal:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}