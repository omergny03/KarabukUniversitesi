#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int number;
    char name[15];
    char surname[15];
    float midtermGrade;
};

int main1()
{
    struct student ogrenciler[10];
    int i;

    for(i=0; i<1; i++)
    {
        printf("%d. ogrencinin bilgilerini giriniz: \n",i+1);
        printf("ogrenci numarasi :\n");
        scanf("%d",&ogrenciler[i].number);
        printf("ogrenci adi :\n");
        scanf("%s",&ogrenciler[i].name);
        printf("ogrenci soyadi :\n");
        scanf("%s",&ogrenciler[i].surname);
        printf("ogrenci midterm grade :\n");
        scanf("%f",&ogrenciler[i].midtermGrade);

    }
    for(i=0; i<1; i++)
    {
      printf("%d\n",ogrenciler[i].number);
      printf("%s\n",ogrenciler[i].name);
      printf("%s\n",ogrenciler[i].surname);
      printf("%.2f\n",ogrenciler[i].midtermGrade);

    }
    return 0;
}
