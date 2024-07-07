package firstPackage;

import java.util.Scanner;

public class maxSayiBulma {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("üç tane sayı giriniz: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        
        if(a>=b&&a>=c) {
        	System.out.println("en büyük: "+a);
        }
        else if(b>=a&&b>=c) {
        	System.out.println("en büyük: "+b);
        }
        else {
        	System.out.println("en büyük: "+c);
        }
	}

}
