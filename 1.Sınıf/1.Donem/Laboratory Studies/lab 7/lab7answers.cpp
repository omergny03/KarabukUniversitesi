#include <stdio.h>
#include <stdlib.h>

void main1(){

    printf("Hello World");

}



//   SORU : 1
//   [Klavyeden girilen iki sayýnýn toplamýný hesaplayýp ekrana yazdýran programý C dili ile yazýnýz.]
//   [Write the program with the C language, which computes the sum of the two numbers entered on the keyboard.]


int main(){

int sayi1,sayi2,sum;

scanf("%d",&sayi1);
scanf("%d",&sayi2);

sum = sayi1+sayi2;

printf("sum = %d",sum);

return 0;
}


//  SORU : 2
// [Klavyeden A ve B tamsayý deðiþkenlerinde tutulan iki sayý giriliyor. A ve B deðiþkenlerinin deðerlerini kendi arasýnda yer deðiþtirerek ekrana yazdýran programý C dili ile yazýnýz.]
// [Two numbers are entered from the keyboard with integer variables A and B. Write the program with the C language, which changes the values of the A and B variables between them.]


int main(){

int A,B,C;

scanf("%d",&A);
scanf("%d",&B);

C = A;
A = B;
B = C; 

printf("A = %d",A);
printf("B = %d",B);

return 0;
}



//   SORU : 3
//   [Klavyeden bir öðrenci için öðrenci no, vize ve final girildiðinde, öðrencinin vize notunun %40’ý ve final notunun %60’ý alarak geçme notunu hesaplayan ve
//   öðrencinin numarasý ile birlikte ekrana sonucu yazdýran programý C dili ile yazýnýz.] [Student ID, visa and final information are entered from the keyboard for a
//   student. Write the program in C language, which calculates the passing grade by taking 40% of the student's midterm and 60% of the final grade]


int main(){
	
int vize,final;
float gnotu;

printf("vize notunu giriniz:");
scanf("%d",&vize);

printf("final notunu giriniz:");
scanf("%d",&final);

gnotu =(vize*0.4)+(final*0.6);

printf("gnotu = %f",gnotu);

return 0;

}



//  SORU : 4
//  [Klavyeden bir dairenin yarýçap bilgisi ve iþlem türü girildiðinde iþlem türü 1 ise dairenin çevresini hesaplanýp yazdýran 2 girilirse alanýnýn hesaplayýp
//  yazdýran, bunlarýn dýþýndaki giriþler için “Yanlýþ giriþ” mesajý vererek sonlanan programý C dili ile yazýnýz.] [The radius information and the operation type of a circle
//  are entered from the keyboard. If the operation type is 1, the perimeter of the circle is calculated and printed, and if the operation type is 2, the area is calculated and printed.
//  “Wrong Input” will be written on the screen for input values other than these. Write the C code according to these requests.]

int main(){
int type,r;
float a,c;


printf("yaricapi giriniz:");
scanf("%d",&r);

printf("type giriniz:");
scanf("%d",&type);

if(type == 1){
  
  c = 2*3.14*r;
  printf("c = %f\n",c);

}
else if(type == 2){

 
 a = 3.14*r*r; 
 printf("a = %f\n",a);
}
 
 else {
 
 
printf("yanlis type girdiniz");

}
return 0;

}



//   SORU : 5
//   [Klavyeden girilen bir para miktarýný en az banknot kullanarak oluþturmak istediðimizde içinde kaç tane 100, 50, 20 ve 10’luk olduðunu bulan programý C 
//   dili ile yazýnýz. Not: Klavyeden girilen para miktarý 10’un katlarý olmalýdýr.] [The amount of money entered from the keyboard is desired to be created
//    using the minimum number of banknotes. For this purpose, the number of each banknote (100, 50, 20 and 10) must be determined for the amount
//    entered. Note: The amount of money entered on the keyboard must be multiples of 10.]

int main(){

int money,x;
int yuzluk,ellilik,yirmilik,onluk;

printf("para miktarini giriniz:");
scanf("%d",&money);

x = money % 10;

if(x == 0){
    
    yuzluk = money/100;
    money = money % 100;
   
    ellilik = money/50;
    money = money % 50;
    
    yirmilik = money/20;
    money = money % 20;
    
    onluk = money/10;
    
    printf("yuzluk = %d\n",yuzluk);
    printf("ellilik = %d\n",ellilik);
    printf("yirmilik = %d\n",yirmilik);
    printf("onluk = %d\n",onluk);

}
 else{
 
 printf("10 un kati olan para mikrati giriniz");
 
 }

return 0;
}















