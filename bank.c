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

// Function to display all accounts
void displayAccounts(const Account accounts[], int count)
{
    printf("\n===== Account List =====\n");
    for (int i = 0; i < count; i++)
    {
        printf("Account Number: %d | Name: %s | Balance: %.2f\n",
               accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
    }
    printf("========================\n");
}
