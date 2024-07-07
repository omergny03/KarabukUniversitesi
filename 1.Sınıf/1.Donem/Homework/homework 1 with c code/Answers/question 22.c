#include <stdio.h>
#include <stdlib.h>


int main(){
 int n;
 int c;
 int sonb;
 int sonuc,x,y,ilkb;

 printf("sayiyi giriniz:");
 scanf("%d",&n);
 c = 0;


  x = n;
 for(;x>0;){
    x = x/10;
    c++;
 }
   printf("c = %d",c);


 x = n;
 for(;x>0;){
    ilkb = x;
    x/=10;
 }



sonb = n%10;

sonuc = sonb*pow(10,c-1);
y = pow(10,c-1);
sonuc += n%y;

sonuc=sonuc-sonb+ilkb;

printf("sonuc = %d",sonuc);

return 0;
}

