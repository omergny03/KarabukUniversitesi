#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main4()
{
    int *ptr;
    int n,i,k;

    printf("dizinin boyutunu giriniz:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("yeterli alan yok");
        exit(0);
    }
    else
    {
        printf("elemanlari giriniz:\n");
        for(i=0; i<n; i++)
        {
            scanf("%d",ptr+i);
        }
        printf("dizinin ekleme islemi icin boyutunu giriniz:");
        scanf("%d",&n);
        ptr=realloc(ptr,n*sizeof(int));
        printf("eklemek istediginiz elemanlari giriniz:\n");
        for(k=i; k<n; k++)
        {
            scanf("%d",ptr+k);
        }
    }

    for(i=0; i<n; i++)
    {
        printf("ptr[%d]=%d\n",i,ptr[i]);
    }


    return 0;
}

