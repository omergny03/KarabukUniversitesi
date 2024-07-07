#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5


int main12()
{
    int dizi[8];
    int i,j,gecici;

    for(i=0; i<8; i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0; i<8; i++)
    {
        for(j=1; j<8-i; j++)
        {
            if(dizi[j-1]%2==0)
            {
                continue;
            }
            else if(dizi[j]%2==0)
            {
                gecici=dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=gecici;

            }
        }
    }
    for(i=0; i<8; i++)
    {
        printf("%d, ",dizi[i]);
    }

    return 0;
}


