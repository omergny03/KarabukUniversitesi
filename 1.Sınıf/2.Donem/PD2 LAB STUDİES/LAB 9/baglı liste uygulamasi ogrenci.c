#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int no;
    char ad[20];
    int vize;
    int x;
    struct student *next;
};
typedef struct student ogrenci;

ogrenci* liste_olustur(int n)
{
    ogrenci *p,*head;
    int i;

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            head=(ogrenci*)malloc(sizeof(ogrenci));
            p=head;
        }
        else
        {
            p->next=(ogrenci*)malloc(sizeof(ogrenci));
            p=p->next;
        }

        printf("%d. ogrenci numarasini giriniz:\n",i+1);
        scanf("%d",&p->no);
        printf("%d. ogrenci adini giriniz:\n",i+1);
        scanf("%s",p->ad);
        printf("%d. ogrenci vizesini giriniz:\n",i+1);
        scanf("%d",&p->vize);
        printf("%d. ogrenci finalini giriniz:\n",i+1);
        scanf("%d",&p->x);

    }
    p->next=NULL;
    return head;
}

ogrenci *ekleme(ogrenci *head)
{
    ogrenci *newogrenci,*p,*q;
    int stdnumber;

    newogrenci=(ogrenci*)malloc(sizeof(ogrenci));
    printf("ogrenci numarasini giriniz:\n");
    scanf("%d",&newogrenci->no);
    printf("ogrenci adini giriniz:\n");
    scanf("%s",newogrenci->ad);
    printf("ogrenci vizesini giriniz:\n");
    scanf("%d",&newogrenci->vize);
    printf("ogrenci finalini giriniz:\n");
    scanf("%d",&newogrenci->x);

    printf("hangi ogrenciden once eklensin: ");
    scanf("%d",&stdnumber);
    p=head;

    if(p->no==stdnumber)
    {
        newogrenci->next=p;
        head=newogrenci;
    }
    else
    {
        while(p->next!=NULL && p->no!=stdnumber)
        {
            q=p;
            p=p->next;
        }
        if(p->no==stdnumber)
        {
            q->next=newogrenci;
            newogrenci->next=p;
        }
        else if(p->next==NULL)
        {
            p->next=newogrenci;
            newogrenci->next=NULL;

        }
    }
    return head;
}

ogrenci *silme(ogrenci *head)
{
    ogrenci *p,*q;
    int stdnumber;

    printf("silinecek ogrencinin numarasi: ");
    scanf("%d",&stdnumber);
    p=head;

    if(p->no==stdnumber)
    {
        head=p->next;
        free(p);
    }
    else
    {
        while(p->next!=NULL && p->no!=stdnumber)
        {
            q=p;
            p=p->next;
        }
        if(p->no==stdnumber)
        {
            q->next=p->next;
            free(p);
        }
        else if(p->next==NULL)
        {
            printf("ogrenci bulunamadi");

        }
    }
    return head;
}

void basari(ogrenci *head,int n)
{
    ogrenci *p;
    float basariNotu;
    int i;

    p=head;

    for(i=0; i<n; i++)
    {
        basariNotu=(float)(p->vize*0.4)+(p->x*0.6);
        printf("%d. ogrencinin basari notu :%.2f ",i+1,basariNotu);
        p=p->next;
    }

}

void basari_ortalamasi(ogrenci *head,int n)
{
    ogrenci *p;
    float basariNotu,sum=0;
    int i;

    p=head;

    for(i=0; i<n; i++)
    {
        basariNotu=(float)(p->vize*0.4)+(p->x*0.6);
        sum+=basariNotu;
        p=p->next;
    }
    printf("ortalama: %.2f",sum/n);

}

void en_yuksek_puan(ogrenci *head,int n)
{
    ogrenci *p;
    ogrenci *enb;
    int max1,max;
    p=head;
    enb=p;
    max=(float)(p->vize*0.4)+(p->x*0.6);
    for(int i=0; i<n; i++)
    {
        max1=(float)(p->vize*0.4)+(p->x*0.6);
        if(max1>=max)
        {
            max=max1;
            enb=p;
        }
        p=p->next;
    }

    printf("en yuksek puan %s ogrencinin ve ortalamasi %d",enb->ad,max);

}

void listele(ogrenci *head,int n)
{
    int i;
    ogrenci *p;

    p=head;
    for(i=0; i<n; i++)
    {
        printf("%d. ogrencinin: \n",i+1);
        printf("no: %d\n",p->no);
        printf("ad: %s\n",p->ad);
        printf("vize: %d\n",p->vize);
        printf("final: %d\n",p->x);

        p=p->next;
    }
}

int main1()
{
    int islem,n;
    ogrenci *head;

    printf("ogrenci sayisini giriniz: ");
    scanf("%d",&n);
    head = liste_olustur(n);


    printf("1-kayit etkleme\t2-kayit silme\t3-ogrencilerin basari notu\t4-en yuksek puana sahip ogrenci\t5-basari notu ortalamasi\n");
    printf("islem seciniz: ");
    scanf("%d",&islem);
    switch(islem)
    {
    case 1 :
        head =ekleme(head);
        n+=1;
        listele(head,n);
        break;
    case 2 :
        head = silme(head);
        n-=1;
        listele(head,n);
        break;
    case 3 :
        basari(head,n);
        break;
    case 4 :
        en_yuksek_puan(head,n);
        break;
    case 5 :
        basari_ortalamasi(head,n);
        break;

    }

    return 0;
}
