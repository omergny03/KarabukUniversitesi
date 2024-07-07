#include <stdio.h>
#include <stdlib.h>

int sayiAl()
{
  int n;
   printf("sayi giriniz:\n");
   scanf("%d",&n);

   if(n!=0)
    {
        sayiAl();

    }
    else
    {
        return 0;
    }

}

int main9()
{

sayiAl();

    return 0;
}

