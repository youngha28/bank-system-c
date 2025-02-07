#ifndef BANK_H
#define BANK_H

#define MAX_ACCOUNTS 100

typedef struct
{
    int accountNumber;
    char name[50];
    double balance;
} Account;

void createAccount(Account accounts[], int *count);
void displayAccounts(const Account accounts[], int count);

#endif
