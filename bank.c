#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("=== Banking Management System ===\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    acc.balance = 0;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Amount deposited successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("Account Number: %d\n", acc.accountNumber);
                printf("Account Holder: %s\n", acc.name);
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("Thank you for using the Banking Management System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}