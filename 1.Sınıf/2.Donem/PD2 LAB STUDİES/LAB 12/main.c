#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char isim[20];
    int midterm;
    int fin;
};
typedef struct student student;

void dosya_olustur()
{
    student ogrenci;
    FILE *ptr;
    ptr=fopen("ogrenci.txt","w");
    if(ptr==NULL)
    {
        printf("dosya acilamadi!");
    }
    else
    {
        printf("ad,midterm ve final\n");
        scanf("%s%d%d",ogrenci.isim,&ogrenci.midterm,&ogrenci.fin);
        //fprintf(ptr,"%-10s%-16s%-10s\n","AD","MIDTERM","FINAL");
        while(!feof(stdin))
        {
            fprintf(ptr,"%-10s%-16d%-10d\n",ogrenci.isim,ogrenci.midterm,ogrenci.fin);
            printf("ad,midterm ve final\n");
            scanf("%s%d%d",ogrenci.isim,&ogrenci.midterm,&ogrenci.fin);
        }
    }
    fclose(ptr);

}

void dosya_listele()
{
    student ogrenci;
    FILE *ptr;
    ptr=fopen("ogrenci.txt","r");
    if(ptr==NULL)
    {
        printf("dosya acilamadi!");
    }
    else
    {

        printf("%-10s%-16s%-10s\n","AD","MIDTERM","FINAL");
        fscanf(ptr,"%s%d%d",ogrenci.isim,&ogrenci.midterm,&ogrenci.fin);
        while(!feof(ptr))
        {
            printf("%-10s%-16d%-10d\n",ogrenci.isim,ogrenci.midterm,ogrenci.fin);
            fscanf(ptr,"%s%d%d",ogrenci.isim,&ogrenci.midterm,&ogrenci.fin);
        }
    }
    fclose(ptr);

}


int main()
{
    int islem;
    printf("lutfen islem seciniz\n");
    printf("1-dosya olusturma\n2-dosya listeleme\n");
    scanf("%d",&islem);
    switch(islem)
    {
    case 1:
        dosya_olustur(0);
        break;
    case 2:
        dosya_listele(0);
        break;


    }
    return 0;
}
