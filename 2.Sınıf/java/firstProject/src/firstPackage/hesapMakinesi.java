package firstPackage;

import java.util.Scanner;

public class hesapMakinesi {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.println("bir sayı giriniz: ");
		int a = scanner.nextInt();
		scanner.nextLine(); // DUMMY
		int b = 1;
		float sonuc = a;
		while (a != 0 && b != 0) {
			System.out.println("1-(+)\n2-(-)\n3-(/)\n4-(*)\n5-sonuç");
			String islem = scanner.nextLine();
			switch (islem) {
			case "1":
				System.out.println("sayı giriniz: ");
				b = scanner.nextInt();
				scanner.nextLine(); // dummy
				sonuc += b;
				break;
			case "2":
				System.out.println("sayı giriniz: ");
				b = scanner.nextInt();
				scanner.nextLine(); // dummy
				sonuc -= b;
				break;
			case "3":
				System.out.println("sayı giriniz: ");
				b = scanner.nextInt();
				scanner.nextLine();
				sonuc = (float) sonuc / b;
				break;
			case "4":
				System.out.println("sayı giriniz: ");
				b = scanner.nextInt();
				scanner.nextLine();
				sonuc *= b;
				break;
			case "5":
				b = 0;
				break;

			}

		}
		System.out.println("sonuç: "+sonuc);
	}

}
