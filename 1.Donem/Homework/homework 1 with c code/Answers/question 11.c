#include <stdio.h>
#include <stdlib.h>



int main(){

int c;
int sum = 0;
int n;

for(c=1;c<=10;c++){
    printf("bir sayi giriniz:\n");
    scanf("%d",&n);
    sum = sum+n;

}
printf("sum = %d",sum);

return 0;
}
