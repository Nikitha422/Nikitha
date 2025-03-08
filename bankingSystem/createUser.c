#include "createUser.h"
#include<stdio.h>
void createUser(struct User *users, int *userCount)
{
    if(*userCount>=100)
    {
        printf("Users is full\n");
        return;
    }
    printf("Enter user ID: ");
    scanf("%d",&users[*userCount].id);
    printf("Enter user name: ");
    scanf("%[^\n]", users[*userCount].name);
    printf("Enter user address: ");
    scanf("%d", &users[*userCount].address);
    printf("Enter user balance: ");
    scanf("%d",&users[*userCount].balance);
    (*userCount)++;
    printf("-----------------------------------------\n");
    printf("User created successfully");
    printf("User ID: \n");
    printf("User Name: \n");
    printf("User Address: \n");
    printf("User Balance: \n");

}
