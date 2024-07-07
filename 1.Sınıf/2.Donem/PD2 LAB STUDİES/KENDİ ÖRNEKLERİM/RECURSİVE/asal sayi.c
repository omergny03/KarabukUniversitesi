#include <stdio.h>
#include <stdlib.h>

int asal (int sayi,int i)
 {
     if(i==1)
     {
         return 1;
     }
     else if(sayi%i==0)
     {
         return 0;
     }
     else
     {
         asal(sayi,i-1);
     }

 }

int main5()
{
  int n,i;
  printf("lutfen sayiyi giriniz:");
  scanf("%d",&n);

  for(i=2;i<=n;i++)
   {
       if(asal(i,i/2))
       {
           printf("%d\n",i);
       }

   }

  return 0;
}
