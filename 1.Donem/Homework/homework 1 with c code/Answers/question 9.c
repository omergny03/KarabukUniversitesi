#include <stdio.h>
#include <stdlib.h>



int main(){

int low,high,r;
int n;
int s;

printf("low degerini giriniz:\n");
scanf("%d",&low);

printf("high degerini giriniz:\n");
scanf("%d",&high);

printf("number degerini giriniz:\n");
scanf("%d",&n);

if(low>high){
    s = low;
    low = high;
    high = s;
}

for(low;low<=high;low++){

    r = low%n;
    if(r==0){
        printf("low = %d\n",low);
}

}

return 0;
}

