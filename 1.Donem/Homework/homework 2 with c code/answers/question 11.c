#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int sayi;
int count,sum;
int sonuc,b;

enbas: ;
sum=0;
printf("sayiyi giriniz:\n");
scanf("%d",&sayi);

count=sayi-1;

for(;count>0;count--)
  {

      sonuc=sayi%count;
      if(sonuc==0)
        {
            sum = sum+count;

        }
  }
            if(sayi==sum)
              {
                  printf("%d mukemmel sayidir\n",sayi);
              }
            else
            {
                printf("%d mukemmel sayi degildir\n",sayi);
            }


printf("tekrar sayi girmek istiyor musunuz?[e/h]\n");
b=getch();
if(b=='e'||b=='E')
    {
        goto enbas;
    }

return 0;
}

