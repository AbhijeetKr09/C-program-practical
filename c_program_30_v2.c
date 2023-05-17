#include <stdio.h>

struct Account
{
    char name[50];
    int account_no;
    char address[50];
    int balance;
};
void main() {
    struct Account ac[5] = {
        {"Person 1", 12345, "IILM UNIVERSITY, GREATER NOIDA", 1000},
        {"Person 2", 23456, "IILM UNIVERSITY, GREATER NOIDA", 2000},
        {"Person 3", 34567, "IILM UNIVERSITY, GREATER NOIDA", 3000},
        {"Person 4", 45678, "IILM UNIVERSITY, GREATER NOIDA", 4000},
        {"Person 5", 56789, "IILM UNIVERSITY, GREATER NOIDA", 5000}
    };
    printf("The account holders are: \n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s \n", ac[i].name);
        printf("Account number: %d \n", ac[i].account_no);
        printf("Address: %s \n", ac[i].address);
        printf("Balance: %d \n", ac[i].balance);
    }
}