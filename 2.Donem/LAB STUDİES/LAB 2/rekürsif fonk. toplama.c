#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int topla(int sayi)
{
  int sonuc;
    if(sayi==1)
    {
        return 1;
    }
    else
    {
     sonuc=sayi+topla(sayi-1);
     return sonuc;


    }
}

int main1()
{
int n;
printf("bir sayi giriniz:");
scanf("%d",&n);
printf("toplam= %d",topla(n));



   return 0;
}
