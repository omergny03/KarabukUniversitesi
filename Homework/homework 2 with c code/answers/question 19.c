#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int x,y;
int count,c,b;
float result,sum=0;

printf("x sayisini giriniz:\n");
scanf("%d",&x);
printf("y sayisini giriniz:\n");
scanf("%d",&y);

for(count=1;count<=y;count++)
  {

     b=1;
    for(c=1;c<=count;c++)
      {
         b=c*b;

      }

    result=pow(x,count)/b;
    sum+=result;
  }
sum+=1;
printf("sum = %f",sum);

return 0;
}

