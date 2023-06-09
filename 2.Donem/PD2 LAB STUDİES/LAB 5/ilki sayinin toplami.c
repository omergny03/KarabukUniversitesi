
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    int *p1,*p2;
    p1=&sayi1;
    p2=&sayi2;
    printf("sayilari giriniz:\n");
    scanf("%d%d",p1,p2);
    printf("toplam = %d",(*p1)+(*p2));

    return 0;
}
