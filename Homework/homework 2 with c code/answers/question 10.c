#include <stdlib.h>
#include <math.h>


int main()
{
int n,x;
int basamak,count,sum;

printf("sayiyi giriniz:");
scanf("%d",&n);


for(n;n>1;n--)
 {
     count=0;
     sum=0;
     x=n;
    for(;x>0;)
        {
          x=x/10;
          count++;
        }
     x=n;
       for(;x>0;)
          {
           basamak=x%10;
           sum = sum+(pow(basamak,count));
           x=x/10;
          }
         if(sum==n)
            {
                printf("%d amstrong sayidir\n",n);
            }

 }

return 0;
}

