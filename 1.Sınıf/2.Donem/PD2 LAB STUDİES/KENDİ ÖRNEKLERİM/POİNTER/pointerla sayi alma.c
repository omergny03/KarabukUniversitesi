#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100


int main7()
{
    int dizi[100],n;
    int *p;
    p = dizi;
    printf("eleman sayisini giriniz:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",p);
        p++;
    }
    p = dizi;
    for(int i=0; i<n; i++)
    {
        printf("%d\n",p[i]);
    }

    return 0;
}


