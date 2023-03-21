#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int n,sayi;
int temp,c,b,sum;

printf("n sayisini giriniz:\n");
scanf("%d",&n);

sayi=n;
while(n>0)
  {
    temp=n%10;
        b=1;
      for(c=1;c<=temp;c++)
         {
             b=b*c;
         }
      sum+=b;
      n=n/10;

}
            if(sayi==sum)
               {
                 printf("%d guclu sayidir",sayi);
               }
            else
               {
                printf("%d guclu sayi degildir",sayi);
               }

return 0;
}

