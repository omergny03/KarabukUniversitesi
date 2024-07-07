#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void ters__cevir(char *p,int adet);

int main3()
{
    char dizi1[N],dizi2[N];
    int uzunluk;

    printf("kelimeyi giriniz:");
    gets(dizi1);
    strcpy(dizi2,dizi1);
    uzunluk=strlen(dizi2);
    ters__cevir(dizi2,uzunluk);
    puts(dizi1);
    puts(dizi2);

    if(strcmp(dizi1,dizi2)==0)
    {
        printf("girdiginiz kelime polindromdur");
    }
    else
    {
        printf("girdiginiz kelime polindrom degildir");
    }
    return 0;
}
void ters__cevir(char *p,int adet)
{
    int i,j;
    char gecici;

    for(i=0,j=adet-1; i<adet/2&&j>=adet/2; i++,j--)
    {
        gecici=p[i];
        p[i]=p[j];
        p[j]=gecici;
    }


}
