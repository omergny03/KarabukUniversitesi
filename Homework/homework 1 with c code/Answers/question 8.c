
#include <stdio.h>
#include <stdlib.h>



int main(){

int low,high;
int sum = 0;

printf("low degeri giriniz:\n");
scanf("%d",&low);

printf("high degeri giriniz:\n");
scanf("%d",&high);

for(low;low<=high;low++){

    sum = sum+low;
}
 printf("sum = %d",sum);

return 0;
}
