#include <stdio.h>
#include <stdlib.h>

int carp(int sayi1,int sayi2)
{
    static int i=1;
    if(i>sayi1)
    {
            return 0;
    }
    else
    {
        i++;
        return sayi2 + carp(sayi1,sayi2);
    }


}

int main2()
{
  int x,y;

  printf("lutfen sayilari giriniz:\n");
  scanf("%d%d",&x,&y);
  printf("sonuc = %d",carp(x,y));

  return 0;
}
