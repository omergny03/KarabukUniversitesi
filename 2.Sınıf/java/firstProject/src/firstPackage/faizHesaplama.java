package firstPackage;

import java.util.*;

public class faizHesaplama {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("*********************");
		System.out.println("Bankamiza Hosgeldiniz");
		System.out.println("*********************");
		System.out.println("Faiz oranimiz %6 dir");
		int anaPara, vade;
		float sum;
		System.out.print("Yatirmak istediginiz tutari giriniz: ");
		anaPara = scanner.nextInt();
		System.out.print("kaç yil vadeli kalacagini giriniz: ");
		vade = scanner.nextInt();
		sum = anaPara;
		for (int i = 1; i <= vade; i++) {
			sum = sum+(float)(sum * 0.06);

		}
    System.out.println("paranız: "+sum);
		
		
	}

}
