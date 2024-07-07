#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void bastir(int *p,int n)
 {
     for(int i=0;i<n;i++)
      {
          printf("%d\n",p[i]);
      }
 }

int main8()
{
 int dizi1[N],dizi2[N],n;
 int *ptr1,*ptr2;

 ptr1=dizi1;
 ptr2=dizi2;
 printf("eleman sayisini giriniz:");
 scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",ptr1);
        ptr1++;
    }
 bastir(dizi1,n);
 ptr1=dizi1;
 for(int i=0;i<n;i++)
   {
       ptr2[i]=ptr1[i];
   }
 bastir(dizi2,n);

    return 0;
}


