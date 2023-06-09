#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kisiler
{
    char ad[15];
} ;
typedef struct kisiler kisiler;

void sirala(kisiler *p,int n)
{
    kisiler temp,*k,*x;
    for(int i=0; i<n; i++)
    {
        x=p;
        k=p+1;
        for(int j=1; j<n-i; j++)
        {
            if(strcmp(x->ad,k->ad)>0)
            {
                strcpy(temp.ad,x->ad);
                strcpy(x->ad,k->ad);
                strcpy(k->ad,temp.ad);

            }
            x++;
            k++;

        }
    }


}

int main6()
{
    int n;
    printf("kisi sayisini giriniz : \n");
    scanf("%d",&n);

    kisiler eleman[n];
    for(int i=0; i<n; i++)
    {
        printf("%d. kisinin adi: ",i+1);
        scanf("%s",eleman[i].ad);
    }
    sirala(eleman,n);

    for(int i=0; i<n; i++)
    {
        printf("%s\n",eleman[i].ad);
    }

    return 0;
}
