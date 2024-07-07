#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tek_sayi()
{
    int sayi;
    FILE *ptr;
    ptr=fopen("tek cift.txt","r");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        fscanf(ptr,"%d",&sayi);
        while(!feof(ptr))
        {
            if(sayi%2==1)
            {
                printf("%d\n",sayi);
            }
            fscanf(ptr,"%d",&sayi);
        }
    }
    fclose(ptr);
}
void cift_sayi()
{
    int sayi;
    FILE *ptr;
    ptr=fopen("tek cift.txt","r");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        fscanf(ptr,"%d",&sayi);
        while(!feof(ptr))
        {
            if(sayi%2==0)
            {
                printf("%d\n",sayi);
            }
            fscanf(ptr,"%d",&sayi);
        }
    }
    fclose(ptr);
}

int main4()
{
    char secim;
    printf("lutfen seciminizi yapiniz:\n");
    printf("1-tek sayilar icin\n2-cift sayilar icin\n");
    secim=getchar();
    switch(secim)
    {
    case '1':
        printf("tek sayilar =\n");
        tek_sayi();
        break;
    case '2':
        printf("cift sayilar =\n");
        cift_sayi();
        break;

    }


    return 0;
}
