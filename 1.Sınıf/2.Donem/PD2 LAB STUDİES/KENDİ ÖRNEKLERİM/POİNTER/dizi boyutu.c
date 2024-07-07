#include <stdio.h>
#include <stdlib.h>
#define N 100

int benimstrlen(char *p)
{
    int i=0;
    while(p[i]!='\0')
    {
        i++;
    }
    return i;

}


int main2()
{
    char dizi[N];

    gets(dizi);
    printf("uzunluk = %d",benimstrlen(dizi));

    return 0;
}

