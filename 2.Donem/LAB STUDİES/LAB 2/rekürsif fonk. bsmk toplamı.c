#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int basamakTopla(int x)
{
static int toplam=0;

 while(x>0)
 {
    toplam+=x%10;
    x=x/10;
   basamakTopla(x);

  return toplam;
 //return x%10 + basamakTopla(x/10);
 }

return 0;
}



int main()
{
int sayi,sum;

printf("lutfen sayiyi giriniz:");
scanf("%d",&sayi);
sum=basamakTopla(sayi);
printf("toplam= %d",sum);

   return 0;
}
