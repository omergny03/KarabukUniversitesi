#include <stdio.h>
#include <stdlib.h>

struct student
{
    char ad[15];
    char bolum[20];
    int no;
};
typedef struct student student;

void dosya_olustur(FILE *fptr)
{
    student ogrenci;
    fptr=fopen("ogrenci.txt","w");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("ogrenci bilgilerini giriniz\n");
        printf("ad\tbolum\tno\t(ogrenci girisini durdurmak icin noyu 0 giriniz)\n");
        scanf("%s%s%d",ogrenci.ad,ogrenci.bolum,&ogrenci.no);
        while(ogrenci.no!=0)
        {
            fwrite(&ogrenci,sizeof(student),1,fptr);
            printf("ad\tbolum\tno\t(ogrenci girisini durdurmak icin noyu 0 giriniz)\n");
            scanf("%s%s%d",ogrenci.ad,ogrenci.bolum,&ogrenci.no);
        }
    }
    rewind(fptr);
    fclose(fptr);
}

void kayit_ekle(FILE *fptr)
{
    student ogrenci= {"","",0};
    int yeniNo;
    fptr=fopen("ogrenci.txt","r+");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("eklenecek ogrencinin numarasini giriniz: ");
        scanf("%d",&yeniNo);
        fseek(fptr,sizeof(student)*(yeniNo-1),SEEK_SET);
        fread(&ogrenci,sizeof(student),1,fptr);
        if(ogrenci.no!=0)
        {
            printf("%d nolu ogrenci zaten mevcut\n",yeniNo);
        }
        else
        {
            printf("adini ve bolumunu giriniz:\n ");
            scanf("%s%s",ogrenci.ad,ogrenci.bolum);
            ogrenci.no=yeniNo;
            fseek(fptr,sizeof(student)*(yeniNo-1),SEEK_SET);
            fwrite(&ogrenci,sizeof(student),1,fptr);
        }
        rewind(fptr);
        fclose(fptr);
    }

}

void listele(FILE *fptr)
{
    student ogrenci= {"","",0};
    fptr=fopen("ogrenci.txt","r");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        while(!feof(fptr))
        {
            fread(&ogrenci,sizeof(student),1,fptr);
            if(ogrenci.no!=0)
            {
                printf("%s %s %d\n",ogrenci.ad,ogrenci.bolum,ogrenci.no);

            }
        }
    }
    rewind(fptr);
    fclose(fptr);
}

void kayit_sil(FILE *fptr)
{
    student ogrenci,bos = {"","",0};
    int no;
    fptr=fopen("ogrenci.txt","r+");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("silinecek ogrencinin numarasini giriniz: ");
        scanf("%d",&no);
        fseek(fptr,sizeof(student)*(no-1),SEEK_SET);
        fread(&ogrenci,sizeof(student),1,fptr);
        if(ogrenci.no==0)
        {
            printf("%d nolu ogrenci mevcut degil\n",no);
        }
        else
        {
            fseek(fptr,sizeof(student)*(no-1),SEEK_SET);
            fwrite(&bos,sizeof(student),1,fptr);
        }
        rewind(fptr);
        fclose(fptr);
    }

}

void text(FILE *fptr)
{
    FILE *yptr;
    yptr=fopen("dokuman.txt","w");
    student ogrenci= {"","",0};
    fptr=fopen("ogrenci.txt","r");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        while(!feof(fptr))
        {
            fread(&ogrenci,sizeof(student),1,fptr);
            if(ogrenci.no!=0)
            {
                fprintf(yptr,"%s %s %d\n",ogrenci.ad,ogrenci.bolum,ogrenci.no);

            }
        }
    }
    rewind(fptr);
    fclose(fptr);
    fclose(yptr);
}


int main1()
{
    FILE *ptr;
    int secim;

    while(1)
    {
        printf("\nsecim yapiniz:\n");
        printf("1-dosya olusturma\n2-kayit ekleme\n3-kayit sil\n4-listele\n5-metin belgesine dok\n0-cikmak icin\n");
        secim=getch();

        switch(secim)
        {
        case '1':
            dosya_olustur(ptr);
            printf("----------------------\n");
            break;

        case '2':
            kayit_ekle(ptr);
            printf("----------------------\n");
            break;
        case '5':
            text(ptr);
            break;
        case '3':
            kayit_sil(ptr);
            break;
        case '4':
            listele(ptr);
            break;
        case '0':
            exit(0);
        }
    }


    return 0;
}
