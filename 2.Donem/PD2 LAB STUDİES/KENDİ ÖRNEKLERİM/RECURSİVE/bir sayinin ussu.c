#include <stdio.h>
#include <stdlib.h>

int usAl(int sayi,int us)
{
    if(us>=1)
     {

       return sayi*usAl(sayi,us-1);
     }
     else
     {
         return 1;
     }
}

int main8()
{
int sayi,us;

printf("sayiyi giriniz:\n");
scanf("%d",&sayi);
printf("ussu giriniz:\n");
scanf("%d",&us);
printf("sonuc = %d",usAl(sayi,us));


   return 0;
}
