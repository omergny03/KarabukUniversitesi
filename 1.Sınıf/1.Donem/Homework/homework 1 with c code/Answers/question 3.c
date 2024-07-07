#include <stdio.h>
#include <stdlib.h>


int main(){

int N,x;

printf("Enter the number:");
scanf("%d",&N);

x = N % 2;

if(x==0){
    printf("N is even");
}
else{
    printf("N is odd");
}

    return 0;
}


