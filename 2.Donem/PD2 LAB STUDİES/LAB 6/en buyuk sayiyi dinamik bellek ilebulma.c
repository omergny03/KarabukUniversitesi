#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int *ptr;
    int n,enb;

    printf("eleman sayisini giriniz:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("yeterli alan yok");
        exit(0);
    }
    else
    {
        printf("elemanlari giriniz:\n");
        for(int i=0; i<n; i++)
        {
            scanf("%d",ptr+i);
        }
        enb=ptr[0];
        for(int i=0; i<n; i++)
        {
            if(ptr[i]>enb)
            {
                enb=ptr[i];
            }
        }
    }
    printf("maksimum eleman= %d",enb);
    free(ptr);

    return 0;
}

