#include <stdio.h>
#include <stdlib.h>


int main(){

int n;
int b,sum=0,x;

printf("sayiyi giriniz:");
scanf("%d",&n);
  x= n;

for(;n>0;){
    b = n%10;
    sum =(b)+(sum*10);
    n = n/10;
}
if(sum==x){
    printf("n polidrom sayidir");
}
else{
    printf("n polidrom sayi degildir");
}


return 0;
}

