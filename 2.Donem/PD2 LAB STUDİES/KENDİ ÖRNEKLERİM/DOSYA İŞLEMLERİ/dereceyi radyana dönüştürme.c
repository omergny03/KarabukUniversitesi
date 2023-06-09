#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main7()
{
    FILE *ptr;
    int derece;
    float sonuc;
    ptr=fopen("acilar.txt","w");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("derece giriniz: ");
        scanf("%d",&derece);
        fprintf(ptr,"RADYAN SONUCLARI\n");
        while(!feof(stdin))
        {
            sonuc=(float)derece/180;
            fprintf(ptr,"%d° =%.2f π\n",derece,sonuc);
            printf("derece giriniz: ");
            scanf("%d",&derece);
        }

    }
    fclose(ptr);

    return 0;
}

