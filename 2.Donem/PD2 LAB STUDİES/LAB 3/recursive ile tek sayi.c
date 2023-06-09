#include <stdio.h>
#include <stdlib.h>
#define N 100

int tekSayi(int a[],int n)
 {
   static int i=0,j=0;

     if(i>=n)
      {
          return 0;
      }
     else
       {
         if(a[i]%2==1)
           {
               j++;
               i++;
              tekSayi(a,n);
           }
          else
           {
               i++;
               tekSayi(a,n);
           }
       }
     return j;

 }


int main1()
{
int dizi[N],i,n;

printf("dizinin eleman sayisini giriniz:");
scanf("%d",&n);
for(i=0;i<n;i++)
  {
      printf("dizi[%d]=",i);
      scanf("%d",&dizi[i]);
  }
printf("%d adet tek sayi var",tekSayi(dizi,n));

   return 0;
}
