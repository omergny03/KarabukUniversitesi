#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int sayi,count,x;
int basamak,sum=0;

printf("sayiyi giriniz:");
scanf("%d",&sayi);
x=sayi;

for(;sayi>0;)
  {
    sayi=sayi/10;
    count++;
  }

sayi=x;
for(;sayi>0;)
    {
      basamak=sayi%10;
      sum=sum+(pow(basamak,count));
      sayi=sayi/10;
    }
sayi=x;
if(sayi==sum)
      {
          printf("%d armstrong sayidir",sayi);
      }
    else
       {
           printf("%d armstrong sayi degildir",sayi);
       }

 return 0;
}
