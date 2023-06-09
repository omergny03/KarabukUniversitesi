#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

char *istenilen_gun(char *p[],int gun)
{
    if(gun>=1&&gun<=7)
    {
        return p[gun-1];
    }
    else
    {
        return NULL;
    }
}

int main4()
{
    char *gunler[7];
    char hafta[7][20];
    int i,gun;

    for(i=0; i<7; i++)
    {
        scanf("%s",hafta[i]);
    }
    for(i=0; i<7; i++)
    {
        gunler[i]=hafta[i];
    }
    printf("kacinci gun ? =");
    scanf("%d",&gun);
    char *p=istenilen_gun(gunler,gun);
    printf("%s",p);

    return 0;
}
