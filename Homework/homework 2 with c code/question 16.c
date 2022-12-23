#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int x,y,c;
int count,b;
float result1,sum1=0;
float result2,sum2=0;
float totalSum=0;

printf("x sayisini giriniz:\n");
scanf("%d",&x);
printf("y sayisini giriniz:\n");
scanf("%d",&y);

for(count=2;count<=y;count+=4)
  {
    b=1;
      for(c=1;c<=count;c++)
        {
          b=b*c;

        }
    result1=pow(x,count)/b;
    sum1=sum1-result1;

 }
printf("sum1 = %f\n",sum1);

for(count=4;count<=y;count+=4)
   {
     b=1;
      for(c=1;c<=count;c++)
        {
          b=b*c;

        }
    result2=pow(x,count)/b;
    sum2=sum2+result2;

   }

printf("sum2 = %f\n",sum2);
totalSum=sum1+sum2+1;
printf("total sum = %f",totalSum);

return 0;
}
