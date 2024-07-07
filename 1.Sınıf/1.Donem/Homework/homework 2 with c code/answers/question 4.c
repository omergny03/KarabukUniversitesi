#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
int sum=0;
int c;
int a;
enbas: ;

for(c=1;c<=50;c++)
  {
  sum+=c;

  }
printf("sum = %d",sum);

scanf("%d",&a);
getchar();
if(a==1){
    goto enbas;
   printf("farkli sayi giriniz:");
}

else{

}
return 0;
}

