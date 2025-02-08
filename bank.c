#include <stdio.h>
#include <string.h>
#include "bank.h"

// Function to create a new account
void createAccount(Account accounts[], int *count)
{
    if (*count >= MAX_ACCOUNTS)
    {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    Account newAccount;
    newAccount.accountNumber = 1000 + *count; // Auto-increment account number
    printf("Enter name: ");
    scanf("%s", newAccount.name);
    newAccount.balance = 0.0; // Initial balance is 0

    accounts[*count] = newAccount;
    (*count)++;

    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
}
