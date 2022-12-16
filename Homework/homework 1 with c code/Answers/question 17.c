#include <stdio.h>
#include <stdlib.h>


int main(){

int n;
float c;
float sum =0;

printf("n sayisini giriniz:");
scanf("%d",&n);

for(c=2;c<=n;c+=2){

 sum = (sum) + (1/c);
}


printf("sum = %f",sum);


return 0;
}

