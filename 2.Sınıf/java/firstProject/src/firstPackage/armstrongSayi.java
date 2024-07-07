package firstPackage;

import java.util.Scanner;

public class armstrongSayi {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int sayi;
		int gecici, sayac = 0;
		int step, sum = 0;

		System.out.print("Lütfen sayi giriniz: ");
		sayi = scanner.nextInt();
		gecici = sayi;
		while (gecici > 0) {
			sayac++;
			gecici = gecici / 10;

		}
		gecici = sayi;
		while (gecici > 0) {
			step = gecici % 10;
			sum += Math.pow(step, sayac);
			gecici = gecici / 10;

		}
		if (sum == sayi) {
			System.out.println(sayi + " sayisi armstong sayidir.");
		} else {
			System.out.println(sayi + " sayisi armstong sayi değildir.");
		}

	}

}
