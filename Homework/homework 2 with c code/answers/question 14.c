#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int n;
int x,temp,b,c,sum;

printf("n sayisini giriniz:\n");
scanf("%d",&n);

for(;n>0;n--)
  {
      sum=0;
      x=n;
      while(x>0)
       {
           temp=x%10;
           b=1;
           for(c=1;c<=temp;c++)
             {
                 b=b*c;
             }
          sum+=b;
          x=x/10;
       }

      if(sum==n)
       {
           printf("%d guclu sayidir\n",n);
       }


  }
return 0;
}

