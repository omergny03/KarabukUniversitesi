#include <stdio.h>
#include <stdlib.h>



int main(){
int a,b,n;
int r;

 a = 6;
printf("n sayisini giriniz:\n");
scanf("%d",&n);

for(b=0;b<=n;b++){
    r = a*b;
    printf("r = %d\n",r);

}

return 0;
}

