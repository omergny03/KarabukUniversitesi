#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100


int *bul(int *ptr,int sayi,int n)
{
    for(int i=0; i<n; i++,ptr++)
    {
        if(*ptr==sayi)
        {
            return ptr;
        }

    }
   return NULL;
}

int main()
{
    int dizi[N],n,i,sayi;
    int *p;

    p=dizi;
    printf("eleman sayisini giriniz:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
    }
    printf("istenilen sayiyi giriniz:");
    scanf("%d",&sayi);
    p=bul(dizi,sayi,n);
    if(p==NULL)
    {
        printf("%d dizide yer almiyor",sayi);
    }
    else
    {
        printf("aradiginiz sayi %d dizide yer aliyor",*p);
    }

    return 0;
}
