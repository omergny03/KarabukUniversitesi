#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    if(sayi==1)
     {
         return sayi;
     }
    else
    {

        return sayi*faktoriyel(sayi-1);
    }


}

int main3()
{
  int n;
  printf("lutfen sayiyi giriniz:");
  scanf("%d",&n);
  printf("sonuc = %d",faktoriyel(n));

  return 0;
}
