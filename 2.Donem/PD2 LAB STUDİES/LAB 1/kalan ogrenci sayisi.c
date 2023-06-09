#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int hesapla(int,int,float *);

int main()
{
 int ogrenciSayisi,gnotu;
 float ort=0.0;
 printf("lutfen ogrenci sayisini giriniz:");
 scanf("%d",&ogrenciSayisi);
 printf("lutfen gecme notunu giriniz:");
 scanf("%d",&gnotu);
 printf("kalan ogrenci sayisi:%d\n", hesapla(ogrenciSayisi,gnotu,&ort));
 printf("ortalama = %.2f",ort);    
	return 0;
}

int hesapla(int sayi,int not,float *p)
{
  int notlar[SIZE];
  int i;
  int sum=0,kaldi=0;

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
   *p=(float)sum/sayi;
 
 return kaldi;
}

