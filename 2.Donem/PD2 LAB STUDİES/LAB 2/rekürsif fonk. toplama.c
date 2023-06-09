#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int topla(int sayi)
{
    if(sayi==1)
    {
        return 1;
    }
    else
    {
     return sayi+topla(sayi-1);


    }
}

int main()
{
int n;
printf("bir sayi giriniz:");
scanf("%d",&n);
printf("toplam= %d",topla(n));



   return 0;
}
