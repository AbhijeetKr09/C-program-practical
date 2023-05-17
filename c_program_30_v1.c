#include <stdio.h>

void main()
{
    struct Account
    {
        char name[50];
        int account_no;
        char address[50];
        int balance;
    };
    int i, n;
    printf("Enter the number of account holders: ");
    scanf("%d", &n);
    getchar();
    struct Account ac[n];
    printf("Enter the account holders: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of holder %d: ", i + 1);
        gets(ac[i].name);
        printf("Enter the account number of holder %d: ", i + 1);
        scanf("%d", &ac[i].account_no);
        getchar();
        printf("Enter the address of holder %d: ", i + 1);
        gets(ac[i].address);
        printf("Enter the balance of holder %d: ", i + 1);
        scanf("%d", &ac[i].balance);
        getchar();
    }
    printf("The account holders are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s \n", ac[i].name);
        printf("Account number: %d \n", ac[i].account_no);
        printf("Address: %s \n", ac[i].address);
        printf("Balance: %d \n", ac[i].balance);
    }
}

