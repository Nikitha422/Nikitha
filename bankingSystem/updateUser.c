#include "updateUser.h"
#include "create.h"
#include<stdio.h>
#include<string.h>
void updateUser(struct User *users, int *userCount)
{
    int userId;
    int fount=0;
    printf("Enter user Id to update: ");
    scanf("%d",&userId);

    for(int i=0;i<userCount;i++)
    {
        if(users[i].id==userId)
            found=1;
        printf("User found!\n");
        printf("Enter new name: ");
        scanf("%[^\n]",users[i].name);
        printf("Enter new address: ");
        scanf("%[^\n]",users[i].address);
        printf("User ID: %d updated successfully\n ", users[i].id);
        printf("new Name: %s\n",users[i].name);
        printf("new address: %s\n",users[i].address);

    }
}



#endif
