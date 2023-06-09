#include <stdio.h>
#include <stdlib.h>

int bolme(int x,int y)
 {
   static int i=0;
     if(x>=y)
     {
             x=x-y;
             i++;
             bolme(x,y);



     }
    return i;

 }

int main6()
{
  int x,y,c;
  printf("lutfen iki sayi giriniz:\n");
  scanf("%d%d",&x,&y);
  if(y>x)
   {
       c=y;
       y=x;
       x=c;
   }
  printf("%d",bolme(x,y));


  return 0;
}
