#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3()
{
    char *isim;
    int n;
    printf("adiniz kadar giriniz:");
    scanf("%d",&n);
    isim=(char *)malloc(n*sizeof(char));
    if(isim==NULL)
    {
        printf("yeterli alan yok");
        exit(0);
    }
    else
    {
        strcpy(isim,"omer");
        printf("adiniz ve soyadiniz kadar giriniz:");
        scanf("%d",&n);
        isim=realloc(isim,n*sizeof(char));
        strcpy(isim,"omer faruk guney");
    }
    printf("%s",isim);


    return 0;
}


