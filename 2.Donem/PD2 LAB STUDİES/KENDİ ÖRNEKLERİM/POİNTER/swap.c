#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void yer_degistir(int *x,int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main6()
{
    int sayi1,sayi2;

    printf("sayilari giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("sayi1 = %d  sayi2 = %d\n",sayi1,sayi2);
    yer_degistir(&sayi1,&sayi2);
    printf("sayi1 = %d  sayi2 = %d",sayi1,sayi2);

    return 0;
}

