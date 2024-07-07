#include <stdio.h>
#include <stdlib.h>

int main(){

float temperature;

printf("Please enter the temperature:");
scanf("%f",&temperature);

if(temperature==0){
    printf("Temperature is freezing point");
}
else if(temperature<0){
    printf("Temperature is below the freezing point");
}
else{
    printf("Temperature is above the freezing point");
}

 return 0;
}

