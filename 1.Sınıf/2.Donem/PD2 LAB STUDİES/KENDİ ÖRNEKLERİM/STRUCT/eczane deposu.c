
#include <stdio.h>
#include <stdlib.h>

struct eczane
{
    char ilac_adi[15];
    int adet;
    int fiyat;
};
typedef struct eczane eczane;

int main8()
{
eczane p[20];
int n;

printf("ilac sayisini giriniz:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("%d. ilacin \n",i+1);
    printf("ilacin adi: ");
    scanf("%s",p[i].ilac_adi);
    printf("adeti: ");
    scanf("%d",&p[i].adet);
    printf("fiyati: ");
    scanf("%d",&p[i].fiyat);
}
  printf("20 adetin altinda olan ilac listesi:\n");
 for(int i=0;i<n;i++)
 {
     if(p[i].adet<=20)
     {

         printf("-> %s = %d\n",p[i].ilac_adi,p[i].adet);

     }


 }
    return 0;
}
