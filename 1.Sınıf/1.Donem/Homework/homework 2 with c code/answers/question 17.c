#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int n,count;
float sum=0,result;

printf("n sayisini giriniz:\n");
scanf("%d",&n);

for(count=1;count<=n;count++)
  {
      result=(float)1/count;
      sum+=result;
  }
printf("sum = %f",sum);

return 0;
}
