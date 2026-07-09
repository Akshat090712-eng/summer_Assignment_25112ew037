#include <stdio.h>

int main()
{
    int id[5], i, n;
    char book[5][30];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID   : %d", id[i]);
        printf("\nBook Name : %s\n", book[i]);
    }

    return 0;
}