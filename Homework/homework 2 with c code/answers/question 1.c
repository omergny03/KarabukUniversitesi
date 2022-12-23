#include <stdio.h>
#include <stdlib.h>

int dikdortgenAlan(int sayi1,int sayi2){
   int sonuc;
   sonuc=sayi1*sayi2;
   return sonuc;
}
int dikdortgenCevre(int sayi1,int sayi2){
   int sonuc;
   sonuc=(2*sayi1)+(2*sayi2);
   return sonuc;

}

int main()
{
   int a,b;
   int alan,cevre;

   printf("uzun kenari giriniz:\n");
   scanf("%d",&a);

   printf("kisa kenari giriniz:\n");
   scanf("%d",&b);

   alan=dikdortgenAlan(a,b);
   printf("alan = %d\n",alan);

   cevre=dikdortgenCevre(a,b);
   printf("cevre = %d\n",cevre);
    return 0;
}
