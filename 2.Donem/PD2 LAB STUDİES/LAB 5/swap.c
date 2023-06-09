#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void swap(int *a,int *b,int *c)
{
    int gecici;
    gecici=*a;
    *a=*c;
    *c=*b;
    *b=gecici;
}

int main4()
{
    int a,b,c;

    printf("sayilari giriniz:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    swap(&a,&b,&c);
    printf("-------------\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    return 0;
}

