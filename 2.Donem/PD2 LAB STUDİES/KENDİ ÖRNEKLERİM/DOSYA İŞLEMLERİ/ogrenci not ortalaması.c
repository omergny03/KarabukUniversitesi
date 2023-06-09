#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char ad[20];
    char ders[20];
    int vize,fin;
};
typedef struct student student;


int main6()
{
    student ogrenci;
    FILE *ptr;
    float ort;
    ptr=fopen("student.txt","w");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        printf("adi\tders\tvize notu\tfinal notu\t\n");
        scanf("%s%s%d%d",ogrenci.ad,ogrenci.ders,&ogrenci.vize,&ogrenci.fin);
        fprintf(ptr,"%-10s%-15s%-10s","ADI","DERS","ORTALAMA");
        while(!feof(stdin))
        {
            ort=(float)0.4*ogrenci.vize+0.6*ogrenci.fin;
            fprintf(ptr,"\n%-10s%-15s%.2f",ogrenci.ad,ogrenci.ders,ort);
            printf("adi\tders\tvize notu\tfinal notu\t\n");
            scanf("%s%s%d%d",ogrenci.ad,ogrenci.ders,&ogrenci.vize,&ogrenci.fin);
        }

    }

    return 0;
}

