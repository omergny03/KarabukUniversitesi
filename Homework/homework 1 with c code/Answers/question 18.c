#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
int decimal,mod=0,sum=0,x=1;


printf("decimal sayisini girniz:\n");
scanf("%d",&decimal);

while(decimal>0){

    mod=decimal%2;
    decimal=decimal/2;
    sum+=mod*x;
    x=x*10;
}
printf("%d",sum);


 return 0;
}

