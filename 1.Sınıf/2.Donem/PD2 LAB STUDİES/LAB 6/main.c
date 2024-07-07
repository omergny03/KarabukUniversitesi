#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ters_cevir(char *p,int boyut)
{
  char gecici;
  int i,k;
  for(i=0,k=boyut-1;i<(boyut/2)&&k>=(boyut/2);i++,k--)
    {
       gecici=p[i];
       p[i]=p[k];
       p[k]=gecici;

    }
}

int main()
{
 char *dizi;
 int n,uzunluk;
 char kelime[50];
 
 printf("dizi boyutunu giriniz:");
 scanf("%d",&n);
 printf("kelimeyi giriniz:\n");
 scanf("%s",kelime);
 dizi=(char *)malloc(n*sizeof(char));
 if(dizi==NULL)
  {
      printf("yeterli alan yok");
      exit(0);
  }
 else
 {
 	
	strcpy(dizi,kelime);
    uzunluk=strlen(dizi);
    ters_cevir(dizi,uzunluk);
    printf("dizinin tersi:");
    puts(dizi);
    printf("%d",uzunluk);
    free(dizi);

 }
    return 0;
}

