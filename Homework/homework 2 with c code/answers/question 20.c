#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int x,y;
int count;
int result,sum=0;

printf("x sayisini giriniz:\n");
scanf("%d",&x);
printf("y sayisini giriniz:\n");
scanf("%d",&y);

for(count=1;count<=y;count++)
  {
    if(count==3)
       {
         result=pow(x,count);
         sum=sum-result;
       }
     else if(count%2!=0)
        {
           result=pow(x,count);
           sum+=result;

        }


  }
printf("sum = %d",sum);

return 0;
}
