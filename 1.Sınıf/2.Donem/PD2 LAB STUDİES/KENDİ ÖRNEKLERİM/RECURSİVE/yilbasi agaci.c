#include <stdlib.h>
#include <stdio.h>

void agacuc(int sayi,int b)
{
    int i;

    if(sayi>5)
    {
        return;
    }
    for(i=0; i<b; i++)
    {
        printf(" ");
    }
    for(i=0; i<sayi; i++)
    {
        printf("*");
    }
    printf("\n");
    agacuc(sayi+2,b-1);
}
void agacgovde(int sayi,int b)
{
    int i;

    if(sayi>9)
    {
        return;
    }
    for(i=0; i<b; i++)
    {
        printf(" ");
    }
    for(i=0; i<sayi; i++)
    {
        printf("*");
    }
    printf("\n");
    agacgovde(sayi+2,b-1);

}

void agackok(int sayi,int b)
 {
    int i;

    if(sayi>3)
    {
        return;
    }
    for(i=0;i<b;i++)
     {
         printf(" ");
     }
    for(i=0;i<1;i++)
    {
        printf("|");
    }
    printf("\n");
    agackok(sayi+1,b);

 }
int main20()
{
    int a,uznlk;
    a=1;
   // printf("agacin boyutnu giriniz:");
   // scanf("%d",&uznlk);
    agacuc(a,9);
    agacgovde(a,9);
    agackok(a,9);
    return 0;
}
