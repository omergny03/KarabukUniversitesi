#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2()
{
    char *ch;
    int n;
    printf("eleman sayisini giriniz:");
    scanf("%d",&n);
    ch=(char *)malloc(n*sizeof(char));
    if(ch==NULL)
    {
        printf("yeterli alan yok");
        exit(0);
    }
    else
    {
        strcpy(ch,"omer faruk guney");

    }
    puts(ch);
    free(ch);

    return 0;
}

