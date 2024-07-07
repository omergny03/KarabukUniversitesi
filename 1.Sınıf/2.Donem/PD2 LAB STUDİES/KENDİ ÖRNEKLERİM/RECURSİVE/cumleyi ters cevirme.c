#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100

void terscumle(char metin[],int boy)
    {

        if(boy==0)
        {
            printf("%c",metin[boy]);
        }
        else
        {
            printf("%c",metin[boy]);
            terscumle(metin,boy-1);
        }
    }

int main14()
{

    char cumle[N];
    printf("Lutfen bir cumle giriniz\n");
    gets(cumle);
    terscumle(cumle,strlen(cumle)-1);
    return 0;
}
