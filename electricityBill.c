#include <stdio.h>
struct electricity {
   char name[50];
   int powerconsumed;
   int bill;
};
int main()
{
   int units,fc=100,amt;
   float surcharge;
   struct electricity e1;
   printf("Enter the name: ");
   scanf("%s", e1.name);
   printf("Enter the units consumed: ");
   scanf("%d",&units);

   if (units>1&&units<101)
   {
       amt=fc+units*5;
   }
   else if (units>100&&units<301)
   {
       amt=units*7;
   }
   else
   {
       amt=units*10;
   }
   if (amt>1000)
   {
       surcharge=0.05*amt;
       amt=surcharge+amt;
   }
   printf("----------------------------------\n");
   printf("Consumer name: %s\n",e1.name);
   printf("Total units consumed: %d units\n",units);
   printf("Surcharge: %f rupees\n",surcharge);
   printf("Bill amount: %d rupees\n",amt);
   printf("----------------------------------\n");
   return 0;
}
