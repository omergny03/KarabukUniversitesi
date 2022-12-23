#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kokBulma(int sayi1,int sayi2,int sayi3){
int delta,b;
float x1,x2;

delta = (sayi2*sayi2)-(4*sayi1*sayi3);

x1= (-sayi2+sqrt(delta))/(2*sayi1);
x2= (-sayi2-sqrt(delta))/(2*sayi1);

printf("x1 = %f\n",x1);
printf("x2 = %f\n",x2);
return 1;
}

int main()
{
    enbas: ;
int a,b,c;
float kok;
printf("denklemin bas katsayilarini yaziniz:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

kok=kokBulma(a,b,c);
printf("",kok);
printf("\ndevam etmek istiyor musunuz?[e/h]");

b=getch();
if(b=='e'||b=='E'){
   goto enbas;
}

    return 0;
}
