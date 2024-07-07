#include <stdio.h>
#include <stdlib.h>

struct araba
{
    int satis;
    int fiyat;
    char model[20];
};

int main1()
{
    struct araba car1;
    char b;
    printf("araba satildi mi (e/h)\n");
    b=getch();
    if(b=='e'||b=='E')
    {
        car1.satis=1;
        printf("arabanin fiyati nedir ?\n");
        scanf("%d",&car1.fiyat);
    }
    else
    {
        car1.satis=0;
        printf("arabanin modeli nedir ?\n");
        gets(car1.model);
    }
    if(b=='e'||b=='E')
    {
        printf("satis= %d ve fiyati= %d",car1.satis,car1.fiyat);
    }
    else
    {
        printf("satis= %d ve model= %s",car1.satis,car1.model);

    }


    return 0;
}

