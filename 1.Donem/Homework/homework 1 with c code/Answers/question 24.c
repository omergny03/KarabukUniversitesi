#include <stdio.h>
#include <stdlib.h>


int main(){

int n;
int i;
int b,c;
c = 0;

printf("n sayisini giriniz:");
scanf("%d",&n);

printf("sayinin içinden istediginiz rakami yaziniz:");
scanf("%d",&i);

for(;n>0;){
   b = n%10;
   if(b==i){
    c++;
   }
   n = n/10;
}

printf("c = %d",c);
return 0;
}


