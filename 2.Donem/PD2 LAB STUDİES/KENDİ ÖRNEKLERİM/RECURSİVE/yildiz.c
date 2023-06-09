#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100

void yildiz(int y,int b)
{
    int i,j,k;
    if(y<=0)
    {
        return;
    }
    else
    {
        for(i=0; i<b; i++)
        {
            printf(" ");
        }
        for(i=0; i<y; i++)
        {
            printf("*");
        }

        printf("\n");
        yildiz(y-2,b+1);
    }

}

int main15()
{
    int n;

    printf("bir n sayisi giriniz:");
    scanf("%d",&n);

    yildiz(n,1);

    return 0;
}
