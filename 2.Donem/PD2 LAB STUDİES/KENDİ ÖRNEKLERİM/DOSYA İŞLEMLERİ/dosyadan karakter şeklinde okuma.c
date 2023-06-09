#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2()
{
    char karakter;
    FILE *ptr;
    ptr=fopen("deneme.txt","r");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        karakter=fgetc(ptr);
        while(karakter!=EOF)
        {
            printf("%c",karakter);
            karakter=fgetc(ptr);
        }

    }


    return 0;
}
