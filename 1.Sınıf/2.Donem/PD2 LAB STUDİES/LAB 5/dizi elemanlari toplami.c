#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3

int topla(int *ptr)
{
    int toplam=0,i;
    for(i=0; i<N; i++)
    {
        toplam+=*(ptr+i);
    }
    return toplam;
}

int main()
{
    int dizi[N];
    int i;
    int *p=dizi;

    printf("dizi elemanlarini giriniz:\n");
    for(i=0; i<N; i++)
    {
        scanf("%d",p+i);
    }
    printf("Toplam = %d",topla(p));
    return 0;
}

