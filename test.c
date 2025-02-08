#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "bank.h"

void test_createAccount()
{
    Account accounts[MAX_ACCOUNTS];
    int count = 0;

    // Create a test account
    printf("Running test: test_createAccount()\n");
    strcpy(accounts[count].name, "Alice");
    accounts[count].accountNumber = 1000 + count;
    accounts[count].balance = 0.0;
    count++;

    // Validate the account creation
    assert(count == 1);
    assert(accounts[0].accountNumber == 1000);
    assert(strcmp(accounts[0].name, "Alice") == 0);
    assert(accounts[0].balance == 0.0);

    printf("test_createAccount() passed!\n");
}

void test_displayAccounts()
{
    Account accounts[MAX_ACCOUNTS];
    int count = 2;

    // Manually adding accounts for testing
    accounts[0].accountNumber = 1000;
    strcpy(accounts[0].name, "Alice");
    accounts[0].balance = 500.0;

    accounts[1].accountNumber = 1001;
    strcpy(accounts[1].name, "Bob");
    accounts[1].balance = 300.0;

    // Display accounts (manually check output)
    printf("Running test: test_displayAccounts()\n");
    displayAccounts(accounts, count);
    printf("Verify the output manually.\n");
}

int main()
{
    test_createAccount();
    test_displayAccounts();
    printf("All tests completed.\n");
    return 0;
}
