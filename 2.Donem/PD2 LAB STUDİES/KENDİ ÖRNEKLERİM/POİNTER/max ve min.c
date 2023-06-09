#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

int en_buyuk(int *p,int max)
{
    int i=0;
    while(i<N)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
     i++;
    }
    return max;
}
int en_kucuk(int *p,int min)
{
    int i=0;
    while(i<N)
    {
        if(p[i]<min)
        {
            min=p[i];
        }
    i++;
    }
    return min;
}
int main10()
{
    int dizi[N],i;
    int *ptr,max,min;

    ptr=dizi;
    printf("diziyi giriniz:\n");
    for(i=0; i<N; i++,ptr++)
    {
        scanf("%d",ptr);
    }
    max=dizi[0];
    min=dizi[0];
    printf("maksimum = %d\n",en_buyuk(dizi,max));
    printf("minimum = %d",en_kucuk(dizi,min));

    return 0;
}
