package firstPackage;

import java.util.Scanner;

public class hipotenüsBulma {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);

         System.out.println("Birinci dik kenarı giriniz: ");
         int a = scanner.nextInt();
         System.out.println("İkinci dik kenarı giriniz: ");
	     int b = scanner.nextInt();
	     float h = (float) Math.sqrt(a*a+b*b);
	     System.out.println("hipotenüs: "+h);
	
	}   

}
