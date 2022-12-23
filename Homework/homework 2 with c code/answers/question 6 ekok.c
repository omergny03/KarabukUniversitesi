#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int sayi1,sayi2,ekok;
int count;

printf("ilk sayiyi giriniz:\n");
scanf("%d",&sayi1);
printf("ikinci sayiyi giriniz:\n");
scanf("%d",&sayi2);

count=sayi1*sayi2;

for(;count>0;count--)
  {
      if(count%sayi1==0&&count%sayi2==0)
         {
             ekok=count;
         }
  }
printf("ekok = %d",ekok);
return 0;
}

