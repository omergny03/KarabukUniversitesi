#include <stdio.h>
#include <stdlib.h>


int main(){

int a;
int r;
int sum = 0;

for(a=1000;a<=2000;a++){
    r = a%2;
    if(r==0){
        printf("a = %d",a);
        sum += a;
    }

}
printf("sum = %d",sum);


return 0;
}

