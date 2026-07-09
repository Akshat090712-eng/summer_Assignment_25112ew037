#include <stdio.h>

int main()
{
    int choice;
    int balance = 10000;
    int amount;

    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Balance = %d", balance);
    }
    else if (choice == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%d", &amount);

        balance = balance + amount;

        printf("Updated Balance = %d", balance);
    }
    else if (choice == 3)
    {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);

        if (amount <= balance)
        {
            balance = balance - amount;
            printf("Updated Balance = %d", balance);
        }
        else
        {
            printf("Insufficient Balance");
        }
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}