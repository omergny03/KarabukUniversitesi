#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int my_strlen(char *p)
{
    int i=0;
    while(p[i]!='\0')
    {
        i++;
    }
    return i;
}

int main3()
{
    char string[N];
    printf("cumlenizi giriniz:");
    gets(string);
    printf("dizinin uzunlugu = %d",my_strlen(string));
    return 0;
}

