#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main8()
{
    FILE *ptr,*ptr1;
    char satir[100],dosyaIsmi[20],*x;
    printf("yedeklemek istediginiz dosya uzantisini giriniz: "); //omer.txt
    gets(dosyaIsmi);
    ptr=fopen(dosyaIsmi,"r");
    if(ptr==NULL)
    {
        printf("yedeklemek istediginiz dosya acilamadi");
    }
    else
    {
        printf("yedeklenecek yerin dosya uzantisini giriniz: "); //faruk.txt
        gets(dosyaIsmi);
        ptr1=fopen(dosyaIsmi,"w");
        if(ptr1==NULL)
        {
            printf("yedeklenecek dosya acilamadi");
        }
        else
        {
            x=fgets(satir,100,ptr);
            while(x!=NULL)
             {
                 fputs(satir,ptr1);
                 x=fgets(satir,100,ptr);
             }

        }
    }
 fclose(ptr);
 fclose(ptr1);

    return 0;
}
