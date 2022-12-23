#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int n,sayi;
int sum,temp,b;

enbas: ;
printf("sayiyi giriniz:\n");
scanf("%d",&n);

sayi=n;
sum=0;
for(;n>0;)
 {
    temp=n%10;
    sum=temp+(sum*10);
    n=n/10;

 }
  if(sayi==sum)
    {
        printf("%d palindrom sayidir\n",sayi);
    }
  else
  {
     printf("%d palindrom sayi degildir\n",sayi);
  }
 printf("baska sayi girmek istiyor musun ? [E/H]\n");
 b=getch();
 if(b=='e'||b=='E')
  {
      goto enbas;
  }

return 0;
}

