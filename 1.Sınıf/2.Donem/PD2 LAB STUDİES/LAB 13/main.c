#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hastane
{
    int no;
    char ad[20];
    int yas;
    char hastalik[50];
};
typedef struct hastane hospital;

void hasta_giris(FILE *fptr)
{
    int id;
    hospital hasta;
    fptr=fopen("hastalar.txt","r+");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("hasta numarasini giriniz: ");
        scanf("%d",&id);
        fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
        fread(&hasta,sizeof(hospital),1,fptr);
        if(hasta.no!=0)
        {
            printf("%d numarali hasta zaten mevcut\n",id);
        }
        else
        {
            printf("adini ve yasini giriniz: ");
            scanf("%s%d",hasta.ad,&hasta.yas);
            printf("hastaligini yaziniz: ");
            scanf("%s",hasta.hastalik);
            hasta.no=id;
            fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
            fwrite(&hasta,sizeof(hospital),1,fptr);
        }
      fclose(fptr);
    }

}
void hasta_arama(FILE *fptr)
{
    hospital hasta;
    int id;
    fptr=fopen("hastalar.txt","r");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("hasta numarasini giriniz: ");
        scanf("%d",&id);
        fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
        fread(&hasta,sizeof(hospital),1,fptr);
        if(hasta.no!=id)
        {
            printf("%d numarali hasta mevcut degil\n",id);
        }
        else
        {
            printf("no: %d\n",hasta.no);
            printf("adi: %s\n",hasta.ad);
            printf("yas: %d\n",hasta.yas);
            printf("hastalik: %s\n",hasta.hastalik);
        }
        rewind(fptr);
        fclose(fptr);
    }

}
void hasta_sil(FILE *fptr)
{
    hospital hasta,bosHasta= {0,"",0,""};
    int id;
    fptr=fopen("hastalar.txt","r+");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("silmek istediginiz hastanin numarasini giriniz: ");
        scanf("%d",&id);
        fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
        fread(&hasta,sizeof(hospital),1,fptr);
        if(hasta.no!=id)
        {
            printf("%d numarali hasta kayitli degil\n",id);
        }
        else
        {
            fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
            fwrite(&bosHasta,sizeof(hospital),1,fptr);

        }
        rewind(fptr);
        fclose(fptr);
    }
}

void kayit_guncelle(FILE *fptr)
{
    hospital hasta;
    int id;
    fptr=fopen("hastalar.txt","r+");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("guncellemek istediginiz hastanin numarasini girinz: ");
        scanf("%d",&id);
        fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
        fread(&hasta,sizeof(hospital),1,fptr);
        if(hasta.no!=id)
        {
            printf("%d numarali hasta kayitli degil\n",id);
        }
        else
        {
            printf("yeni bilgileri giriniz: \n");
            printf("hasta adini ve yasini giriniz\n");
            scanf("%s%d",hasta.ad,&hasta.yas);
            printf("hastakik durumunu giriniz: ");
            scanf("%s",hasta.hastalik);
            fseek(fptr,sizeof(hospital)*(id-1),SEEK_SET);
            fwrite(&hasta,sizeof(hospital),1,fptr);

        }
        rewind(fptr);
        fclose(fptr);
    }
}
void dosya_listele(FILE *fptr)
{
    hospital hasta= {0,"",0,""};
    FILE *yazptr;
    fptr=fopen("hastalar.txt","r");
    if(fptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        yazptr=fopen("hasta dokuman.txt","w");
        if(yazptr==NULL)
        {
            printf("dosya acilamadi");
        }
        else
        {
            fprintf(yazptr,"%10s%10s%10s%15s\n","NO","AD","YAS","HASTALIK");
            while(!feof(fptr))
            {
                fread(&hasta,sizeof(hospital),1,fptr);
                if(hasta.no!=0)
                {
                    fprintf(yazptr,"%10d%10s%10d%15s\n",hasta.no,hasta.ad,hasta.yas,hasta.hastalik);
                }

            }
            fclose(yazptr);
        }
        rewind(fptr);
        fclose(fptr);
    }
}

int main()
{
    FILE *ptr;
    int secim;
    hospital hasta = {0,"",0,""};
    ptr=fopen("hastalar.txt","a");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            fwrite(&hasta,sizeof(hospital),1,ptr);
        }
     rewind(ptr);
    }
    while(1)
    {
        printf("----------------------------");
        printf("\nsecim yapiniz:\n");
        printf("1-hasta girisi\n2-hasta arama\n3-hasta kaydi silme\n4-kayit guncelle\n5-dosyaya listele\n0-cikmak icin\n");
        printf("----------------------------\n");
        secim=getch();

        switch(secim)
        {
        case '0':
            exit(0);
        case '1':
            hasta_giris(ptr);
            break;
        case '2':
            hasta_arama(ptr);
            break;
        case '3':
            hasta_sil(ptr);
            break;
        case '4':
            kayit_guncelle(ptr);
            break;
        case '5':
            dosya_listele(ptr);
            break;
        }

    }
    fclose(ptr);
    return 0;

}
