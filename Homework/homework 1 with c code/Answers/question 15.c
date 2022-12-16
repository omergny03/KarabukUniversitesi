#include <stdio.h>
#include <stdlib.h>



int main(){
int c,n;

printf("n sayisini giriniz:");
scanf("%d",&n);


if(n>0){
for(c=n;c>=1;c--){
    printf("c=%d\n",c);
    }
}
else if(n<1){
    for(c=n;c<=1;c++){
     printf("c = %d\n",c);
    }
}


return 0;
}

