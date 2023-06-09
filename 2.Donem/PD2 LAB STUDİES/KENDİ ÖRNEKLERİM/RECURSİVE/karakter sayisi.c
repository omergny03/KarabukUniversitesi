#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100

int karakterSayisi(char dizi[])
{
    static int i=0;

    if(dizi[i]=='\0')
    {
        return 0;
    }
    else
    {
        i++;
        return 1+karakterSayisi(dizi);
    }

}

int main16()
{
    char cumle[N];

    printf("cumle = ");
    gets(cumle);
    printf("karakter sayisi = %d",karakterSayisi(cumle));

    return 0;
}
