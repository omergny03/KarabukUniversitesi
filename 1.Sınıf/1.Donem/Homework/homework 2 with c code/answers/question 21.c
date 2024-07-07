#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int n;
int count,sum=0,totalSum;

printf("terim sayisini giriniz:\n");
scanf("%d",&n);

for(count=1;count<=n;count++)
   {
     sum=1+(sum*10);
     totalSum+=sum;

   }
printf("toplam = %d",totalSum);

return 0;
}

