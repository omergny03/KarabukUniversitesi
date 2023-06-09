#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main5()
{
    char dizi[50];
    FILE *ptr;
    ptr=fopen("ekleme.txt","a");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("eklemek istediginiz cumleyi giriniz: ");
        gets(dizi);
        fprintf(ptr,"\n%s",dizi);
        //fputs(dizi,ptr);
    }
    fclose(ptr);
    return 0;
}
