#include <stdio.h>
#include <stdlib.h>

struct konum
{
    char ad[15];
    char soyad[20];
    char tel[20];
    char adres[100];
    int posta;
};
typedef struct konum konum;


int main5()
{
    konum *ptr,*p;
    int n;

    printf("adeti giriniz:");
    scanf("%d",&n);
    ptr=(konum*)malloc(n*sizeof(konum));
    p=ptr;
    for(int i=0; i<n; i++)
    {
        printf("%d. kisinin bilgileri= \n",i+1);
        printf("adi: ");
        scanf("%s",p->ad);
        printf("soyadi: ");
        scanf("%s",p->soyad);
        printf("tel: ");
        scanf("%s",p->tel);
        printf("adres: ");
        scanf("%s",p->adres);
        printf("posta kodu: ");
        scanf("%d",&p->posta);
       p++;
     printf("---------------------\n");
    }
    p=ptr;
    for(int i=0; i<n; i++)
    {
        printf("%d. kisinin bilgileri= \n",i+1);
        printf("adi: %s\n ",p->ad);
        printf("soyadi: %s\n ",p->soyad);
        printf("tel: %s\n ",p->tel);
        printf("adres: %s\n ",p->adres);
        printf("posta kodu: %d \n",p->posta);

       p++;
     printf("---------------------");
    }


    return 0;
}

