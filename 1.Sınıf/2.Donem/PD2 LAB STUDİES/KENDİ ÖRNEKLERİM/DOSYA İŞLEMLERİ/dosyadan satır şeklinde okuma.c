#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3()
{
    char satir[50],*x;
    FILE *ptr;
    ptr=fopen("deneme.txt","r");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        x=fgets(satir,50,ptr);
        while(x!=NULL)
        {
            puts(satir);
            x=fgets(satir,50,ptr);
        }

    }
    return 0;
}

