#include <stdio.h>
#include <stdlib.h>


int main(){
int n;
int c;

printf("n sayisini giriniz:");
scanf("%d",&n);

for(c=0;n>0;c++){
    n = n/10;
}
printf("c = %d",c);



return 0;
}

