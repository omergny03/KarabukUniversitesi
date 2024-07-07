#include <stdio.h>
#include <stdlib.h>
#define N 10

int main2()
{
    int dizi[N];
    int *p;
    p=dizi;
    printf("dizi elemanlarini giriniz:\n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0; i<N; i++)
    {
        printf("dizi[%d] = %d\n",i,p[i]);
    }
    return 0;
}

