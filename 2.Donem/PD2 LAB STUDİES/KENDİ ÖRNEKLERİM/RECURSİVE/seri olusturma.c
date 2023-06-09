#include <stdio.h>
#include <stdlib.h>

void seriOlusturma(int b,int s,int a)
{
  if(b>s)
    {
      exit(0);
    }
  else
  {
    printf("%4d",b);
    seriOlusturma(b+a,s,a);
  }

}

int main12()
{
int bas,bit,artim;

printf("baslangic degerini giriniz:\n");
scanf("%d",&bas);
printf("bitis degerini giriniz:\n");
scanf("%d",&bit);
printf("artim degerini giriniz:\n");
scanf("%d",&artim);

seriOlusturma(bas,bit,artim);

  return 0;
}
