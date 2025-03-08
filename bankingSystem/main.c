#include <stdio.h>
#include "createUser.h"

//struct User{
//    int id;
//    int balance;
//    char name[50];
//    char address[200];
//};

int main() {
    int options;
    struct User users[100];
    int userCount=0;

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Create User\n");
        printf("2. Delete User\n");
        printf("3. Credit Money\n");
        printf("4. Debit Money\n");
        printf("5. Transfer Money\n");
        printf("6. Update Users\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &options);

        switch (options) {
            case 1:
                printf("\nCreate User\n");
                //createUser(users,&userCount);
                break;
            case 2:
                printf("\nDelete User\n");
                //deleteUser(users,&userCount);
                break;
            case 3:
                printf("\nCredit Money\n");
                //creditMoney(users,&userCount);
                break;
            case 4:
                printf("\nDebit Money\n");
                //debitMoney(users,&userCount);
                break;
            case 5:
                printf("\nTransfer Money\n");
                //transferMoney(users,&userCount);
                break;
            case 6:
                printf("\nUpdate User\n");
                //updateUsers(users,&userCount);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}


