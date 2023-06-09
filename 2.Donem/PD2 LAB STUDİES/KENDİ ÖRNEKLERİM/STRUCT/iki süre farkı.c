#include <stdio.h>
#include <stdlib.h>

struct zaman
{
    int saat;
    int dakika;
    int saniye;
};
typedef struct zaman time;

void fark(time t1,time t2,time *frk)
{
    int s1,s2,s;
    s1=t1.saat*3600+t1.dakika*60+t1.saniye;
    s2=t2.saat*3600+t2.dakika*60+t2.saniye;
    s=s2-s1;
    frk->saat=s/3600;
    s=s%3600;
    frk->dakika=s/60;
    s=s%60;
    frk->saniye=s;
}

int main7()
{
    time t1,t2,frk;

    printf("baslangic zamanini giriniz(saat,dakika,saniye)=\n");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
    printf("bitis zamanini giriniz(saat,dakika,saniye)=\n");
    scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
    fark(t1,t2,&frk);
    printf("%d ",frk.saat);
    printf("%d ",frk.dakika);
    printf("%d",frk.saniye);

    return 0;
}
