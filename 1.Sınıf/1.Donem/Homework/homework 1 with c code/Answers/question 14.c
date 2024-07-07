#include <stdio.h>
#include <stdlib.h>



int main(){
int a,b;
int n;
int factorial;

printf("n sayisini giriniz:");
scanf("%d",&n);

a = 1;
for(b=1;b<=n;b++){
    a=a*b;
    factorial = a;
}
printf("factorial = %d",factorial);

return 0;
}

