#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int topla(int *x,int *y)
{

    return (*x)+(*y);
}

int main5()
{
    int x,y;

    printf("sayilari giriniz:\n");
    scanf("%d%d",&x,&y);
    printf("toplam = %d",topla(&x,&y));

    return 0;
}

