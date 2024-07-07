#include <stdio.h>
#include <stdlib.h>

int topla(int sayi)
{

  if(sayi==0)
    {
        return sayi;
    }

  return sayi + topla(sayi-1);
}


int main1()
{
  int n;

  printf("lutfen bir sayi giriniz:");
  scanf("%d",&n);
  printf("sonuc = %d",topla(n));
  return 0;
}

