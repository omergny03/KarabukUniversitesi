#include <stdio.h>
#include <stdlib.h>
#define N 5

void dizi_max(int *p,int *j)
{
    int i;
    for(i=1; i<N; i++)
    {
        if(p[i]>*j)
        {
            *j=p[i];
        }
    }

}


int main1()
{
    int dizi[N],i;
    int max;
    for(i=0; i<N; i++)
    {
        scanf("%d",&dizi[i]);
    }
    max=dizi[0];
    dizi_max(dizi,&max);
    printf("max = %d",max);

    return 0;
}

