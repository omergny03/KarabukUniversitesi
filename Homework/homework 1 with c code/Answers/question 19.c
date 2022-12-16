#include <stdio.h>
#include <stdlib.h>


int main(){

int n;
int c,r;

printf("carpim tablosunu istediginiz sayiyi giriniz:");
scanf("%d",&n);

for(c=1;c<=n;c++){
    r = n*c;
    printf("r = %d\n",r);
}


return 0;
}

