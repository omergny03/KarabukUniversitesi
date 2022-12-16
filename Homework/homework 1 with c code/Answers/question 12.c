#include <stdio.h>
#include <stdlib.h>



int main(){

int low,high;
int step;
int s;
int c = 0;

printf("low degerini giriniz:\n");
scanf("%d",&low);

printf("high degerini giriniz:\n");
scanf("%d",&high);

printf("step degerini giriniz:\n");
scanf("%d",&step);

if(low>high){
    s = low;
    low = high;
    high = s;
}
for(low;low<=high;){
    printf("low = %d\n",low);
    low = low+step;
    c++;
}
printf("c = %d",c);


return 0;
}

