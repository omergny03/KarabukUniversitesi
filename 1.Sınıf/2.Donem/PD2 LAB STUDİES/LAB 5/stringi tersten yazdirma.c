#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void ters_cevir(char *p,int uznlk)
{
    int i,j;
    char gecici;

    for(i=0,j=uznlk-1; i<uznlk/2&&j>=uznlk/2; i++,j--)
    {
        gecici=p[i];
        p[i]=p[j];
        p[j]=gecici;
    }

}

int main()
{
    char dizi[N];
    int uzunluk;

    printf("stringinizi giriniz:\n");
    gets(dizi);
    uzunluk=strlen(dizi);
    ters_cevir(dizi,uzunluk);
    puts(dizi);

    return 0;
}

