#include <stdio.h>
#include <stdlib.h>


void listele(int sayi)
{
 static int i=1;

 if(i!=sayi)
  {
    if(i%2==1)
      {
          printf("%d\n",i);
          i++;
          listele(sayi);
      }
     else
     {
         i++;
         listele(sayi);
     }

  }

}

int main4()
{
  int n;
  printf("lutfen sayiyi giriniz:");
  scanf("%d",&n);
  listele(n);

  return 0;
}

