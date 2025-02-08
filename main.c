#include <stdio.h>
#include "bank.h"

int main()
{
    Account accounts[MAX_ACCOUNTS]; // Array to store accounts
    int accountCount = 0;           // Number of accounts

    int choice;
    while (1)
    {
        printf("\n1. Create Account\n2. View Accounts\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount(accounts, &accountCount);
            break;
        case 2:
            displayAccounts(accounts, accountCount);
            break;
        case 3:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
