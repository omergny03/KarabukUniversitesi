package firstPackage;

import java.util.Scanner;

public class arabaSorusu {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Arabanın km de kaç kuruş yaktığını yazınız: ");
		float fiyat = scanner.nextFloat();
		System.out.println("kaç km gittiğinizi yazınız: ");
	    int km = scanner.nextInt();
	    double ucret = fiyat*km;
	    System.out.println(km + " km ye karşılık gelen ücret: "+ucret);
	
	}

}
