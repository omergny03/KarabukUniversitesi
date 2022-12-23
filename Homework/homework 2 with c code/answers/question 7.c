#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int n,r,count;
int c,enk;
enk=2;

printf("sayiyi giriniz:");
scanf("%d",&n);



for(n;n>2;n--)
   {
     count=0;
     c=n-1;
      for(c;c>1;c--)
        {
         r=n%c;
          if(r==0)
            {
              count++;
            }

        }
     if(count==0)
        {
           printf("%d asal sayidir\n",n);
        }


   }
if(n>=2){
    printf("%d asal sayidir\n",enk);
}

return 0;
}

