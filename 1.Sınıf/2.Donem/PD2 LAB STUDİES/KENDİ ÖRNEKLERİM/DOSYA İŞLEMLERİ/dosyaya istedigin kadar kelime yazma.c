#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1()
{
    char dizi[20];
    int n;
    FILE *ptr;
    printf("kelimeyi giriniz: ");
    scanf("%s",dizi);
    printf("kac adet olmasini istiyorsunuz: ");
    scanf("%d",&n);
    ptr=fopen("alt alta.txt","w");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            fprintf(ptr,"%s\n",dizi);

        }
    }


    return 0;
}
