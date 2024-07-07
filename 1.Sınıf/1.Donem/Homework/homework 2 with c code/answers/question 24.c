
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
int binary;
int count,temp,sum=0;

enbas: ;
printf("binary sayisini giriniz:\n");
scanf("%d",&binary);
count=0;

for(;binary>0;)
 {
     temp=binary%10;
     if(temp==0||temp==1)
       {
           sum=sum+(temp*pow(2,count));
           binary=binary/10;
           count++;
       }
        else if(temp!=1||temp!=0)
          {
              printf("binary numarasi girmediniz!!!\n");
              printf("tekrar sayi girmek icin herhangi bir tusa basiniz\n");
              getch();
              goto enbas;
          }

 }
printf("sum = %d",sum);

return 0;
}
