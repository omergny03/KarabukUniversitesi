#include <stdlib.h>
#include <math.h>


int main(){
int sayi1,sayi2;
int count,ebob;

printf("ilk sayiyi giriniz:\n");
scanf("%d",&sayi1);
printf("ikinci sayiyi giriniz:\n");
scanf("%d",&sayi2);

for(count=2;count<=sayi1&&count<=sayi2;count++)
    {
        if(sayi1%count==0&&sayi2%count==0)
          {
              ebob=count;
          }

    }
printf("ebob = %d",ebob);


 return 0;
}
