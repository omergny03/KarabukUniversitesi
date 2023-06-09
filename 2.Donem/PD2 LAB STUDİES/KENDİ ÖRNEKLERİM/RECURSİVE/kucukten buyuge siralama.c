#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void sirala(int a[])
{
    static int i,j;
    int gecici;
    for(i=0; i<N; i++)
    {
        for(j=1; j<N-i; j++)
        {
            if(a[j-1]>a[j])
            {
                gecici=a[j-1];
                a[j-1]=a[j];
                a[j]=gecici;
                sirala(a);
            }

        }
    }

}

int main13()
{
    srand(time(NULL));
    int i,n;
    int dizi[N];

    for(i=0; i<N; i++)
    {
        dizi[i]=rand()%100+1;

    }
    for(i=0; i<N; i++)
    {
        printf("%3d",dizi[i]);
    }

    printf("\n");

    sirala(dizi);

    for(i=0; i<N; i++)
    {
        printf("%3d",dizi[i]);
    }
    return 0;
}
