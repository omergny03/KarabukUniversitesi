#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int count,sum=0;

for(count=200;count>=100;count--)
  {
     if(count%9==0)
      {
          sum+=count;
      }
  }

printf("sum = %d",sum);

return 0;
}


