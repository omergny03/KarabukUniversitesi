#include <stdio.h>
#include <stdlib.h>


int main(){
int ilkb,sonb;
int n;
int r,r2;
int b,sum=0;

printf("n sayisini giriniz:");
scanf("%d",&n);

r = n%10;
sonb = r;

for(;n>0;){
    b = n%10;
    sum =(b)+(sum*10);
    n = n/10;
}

r2 = sum%10;
ilkb = r2;

printf("ilkb = %d\n",ilkb);
printf("sonb = %d\n",sonb);

return 0;
}
