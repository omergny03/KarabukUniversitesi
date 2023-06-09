#include <stdio.h>
#include <stdlib.h>

struct sayi
{
    int gercel;
    int karmasik;

};

int main2()
{
    struct sayi x,y;
    char op;

    printf("ilk karmasik sayiyi giriniz:\n");
    scanf("%d%d",&x.gercel,&x.karmasik);
    printf("ikinci karmasik sayiyi giriniz:\n");
    scanf("%d%d",&y.gercel,&y.karmasik);
    printf("operatoru giriniz(+/-)\n");
    op=getch();
   if(op=='+')
   {
       printf("%d %di",x.gercel+y.gercel,x.karmasik+y.karmasik);
   }
    return 0;
}

