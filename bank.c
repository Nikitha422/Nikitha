#include <stdio.h>
struct customer {
   char name[50];
   int balance;

};
int main() {
   int r,i,money;
   struct customer c1;
   struct customer c2;
   printf("Enter the name: ");
   scanf("%s", c1.name);
   printf("Enter balance: ");
   scanf("%d", &c1.balance);
   printf("Enter the name: ");
   scanf("%s", c2.name);
   printf("Enter balance: ");
   scanf("%d", &c2.balance);
   printf("Enter a case: ");
   scanf("%d",&money);
   switch (money)
   {
       case 1:
           printf("Enter amount to be debited: ");
           scanf("%d",&r);
           c1.balance-=r;
           break;

    case 2:
        printf("Enter amount to be debited: ");
        scanf("%d",&r);
        c2.balance-=r;
        break;

    case 3:
        printf("Enter amount to be credited: ");
        scanf("%d",&r);
        c1.balance+=r;
        break;

    case 4:
        printf("Enter amount to be credited: ");
        scanf("%d",&r);
        c2.balance+=r;
        break;

    case 5:
        printf("Enter amount to be transferred: ");
        scanf("%d",&r);

        c2.balance+=r;
        c1.balance-=r;
        break;
    case 6:
        printf("Enter amount to be transferred: ");
        scanf("%d",&r);
        c1.balance+=r;
        c2.balance-=r;
        break;


    default:
        printf("Enter correct case");
        //break;
   }

   printf("Name: %s", c1.name);
   printf("\nBalance: %d\n", c1.balance);
   printf("Name: %s", c2.name);
   printf("\nBalance: %d", c2.balance);
   return 0;
}



