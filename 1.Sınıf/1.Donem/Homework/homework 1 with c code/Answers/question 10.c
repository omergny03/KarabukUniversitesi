#include <stdio.h>
#include <stdlib.h>



int main(){

int a;
int b;
int c;
int enb;

printf("sayilari giriniz:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a==b && b==c){
    enb = a;
    printf("enb = %d",enb);
}
else if(a==b && a>c){
    enb = a;
    printf("enb = %d",enb);
}

else if(c>a && c>b){
    enb = c;
    printf("enb = %d",enb);
}
else if(b>a){
    enb = b;
    printf("enb = %d",enb);
}
else{
    enb = a;
    printf("enb = %d",enb);
}


return 0;
}

