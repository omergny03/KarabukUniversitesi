#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int hesapla(int,int);

int main1()
{
 int ogrenciSayisi,gnotu;

 printf("lutfen ogrenci sayisini giriniz:");
 scanf("%d",&ogrenciSayisi);
 printf("lutfen gecme notunu giriniz:");
 scanf("%d",&gnotu);

printf("kalan ogrenci sayisi:%d", hesapla(ogrenciSayisi,gnotu));
    return 0;
}


int hesapla(int sayi,int not)
{
  int notlar[SIZE];
  int i;
  int sum=0,kaldi=0;
  float ort;


  for(i=0;i<sayi;i++)
   {
      printf("%d. ogrencinin notu:",i+1);
      scanf("%d",&notlar[i]);
      sum+=notlar[i];

   if(notlar[i]<not)
   {
       kaldi++;
   }

   }

   ort=(float)sum/sayi;
   printf("ortalama=%.2f\n",ort);

 return kaldi;
}

