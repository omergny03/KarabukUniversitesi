#include <stdio.h>
#include <stdlib.h>

int uss(int us)
 {
     if(us==0)
     {
         return 1;
     }
     else
     {
       if(us>=1)
         {
           return 2*uss(us-1);

         }

     }
}

int main10()
{
int us,n;

printf("bir n degeri giriniz:\n");
scanf("%d",&n);

for(us=0;us<=n;us++)
 {

   printf("2 ussu %d = %d\n",us,uss(us));

 }
   return 0;
}
