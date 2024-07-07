#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main9()
{
    FILE *ptr;
    char kelime[20];
    ptr=fopen("omer.txt","w");
    if(ptr==NULL)
    {
        printf("dosya acilamadi");
    }
    else
    {
        gets(kelime);
        while(kelime[0]!='0')
        {
            fprintf(ptr,"%s\n",kelime);
            gets(kelime);
        }
        fclose(ptr);

    }


    return 0;
}
