#ifndef BANK_H
#define BANK_H

#define MAX_ACCOUNTS 100

// Structure to store account information
typedef struct
{
    int accountNumber;
    char name[50];
    double balance;
} Account;

// Function declarations
void createAccount(Account accounts[], int *count);
void displayAccounts(const Account accounts[], int count);
void deposit(Account accounts[], int count, int accountNumber, double amount);
void withdraw(Account accounts[], int count, int accountNumber, double amount);

#endif
