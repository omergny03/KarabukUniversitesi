#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int sayi,count,sum=0,sonuc;

printf("sayiyi giriniz:\n");
scanf("%d",&sayi);

for(;sayi>0;sayi--)
   {
      sum=0;
      count=sayi-1;
       for(;count>0;count--)
           {

               sonuc=sayi%count;

                if(sonuc==0)
                  {
                    sum=sum+count;
                  }
           }
                   if(sayi==sum)
                    {
                        printf("%d mukemmel sayidir\n",sayi);
                    }


   }


return 0;
}


