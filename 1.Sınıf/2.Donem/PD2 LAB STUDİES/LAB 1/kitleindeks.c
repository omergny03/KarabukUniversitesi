#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kitleIndeks(float,int);

int main2()
{
    float boy;
    int kilo;

    printf("lutfen kilonuzu giriniz:");
    scanf("%d",&kilo);
    printf("lutfen boyunuzu giriniz:");
    scanf("%f",&boy);



    switch(kitleIndeks(boy,kilo))
    {
        case 1 : printf("zayif");
                 break;
        case 2 : printf("normal");
                 break;
        case 3 : printf("kilolu");
                 break;
        case 4 : printf("obez");
                 break;

    }
   return 0;
}

int kitleIndeks(float b,int k)
{
    float sonuc;

    sonuc= k/(b*b);

    if(sonuc<=18)
    {
        return 1;
    }

    else if(sonuc<=25)
    {
        return 2;
    }

    else if(sonuc<=30)
    {
        return 3;
    }

    else
    {
        return 4;
    }

}
