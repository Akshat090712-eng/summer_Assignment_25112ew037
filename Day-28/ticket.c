#include <stdio.h>

int main()
{
    char name[50];
    int seats;
    int price = 500;
    int total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    total = seats * price;

    printf("\n----- Ticket Details -----\n");
    printf("Customer Name : %s\n", name);
    printf("Seats Booked  : %d\n", seats);
    printf("Ticket Price  : %d\n", price);
    printf("Total Amount  : %d\n", total);

    return 0;
}