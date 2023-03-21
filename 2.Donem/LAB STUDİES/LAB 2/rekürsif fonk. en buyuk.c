#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int buyuk(int dizi[])
{
static int i=0,maks=-9999;

 if(i<5)
 {
     if(dizi[i]>maks)
     {
        maks = dizi[i];
        i++;

        buyuk(dizi);
     }
     else 
     {
       i++;	 
	   buyuk(dizi);
	 }
 
 
 }
   return maks;
}


int main()
{
int sayilar[5];
int i;
printf("sayilari giriniz:");

for(i=0;i<5;i++)
{
    scanf("%d",&sayilar[i]);

}
printf("en buyuk= %d",buyuk(sayilar));


   return 0;
}
