package firstPackage;

import java.util.Scanner;

public class ATM {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		float bakiye = 0f;
		int islem = 0;
		while (islem != 4) {
			System.out.println("------------------------------------------------");
			System.out.println("1-Bakiye Sorgulama\n2-Para Çekme\n3-Para Yatırma\n4-Çıkış");
			System.out.println("------------------------------------------------");
			System.out.print("Lütfen işleminizi seçiniz: ");
			islem = scanner.nextInt();
			switch (islem) {
			case 1:
				System.out.println("Bakiyeniz: " + bakiye);
				break;
			case 2:
				if (bakiye == 0) {
					System.out.println("Hesabınızda para yoktur!");
				} else {
					System.out.print("Çekmek itediğiniz tutarı girin: ");
					float pcek = scanner.nextFloat();
					if (bakiye-pcek < 0) {
						System.out.println("Hesabınızda çekmek istediğiniz tutar kadar maalesef para bulunmuyor.");
						System.out.println("Bakiyeniz: " + bakiye);
					} else {
						bakiye -= pcek;
						System.out.println("Kalan bakiyeniz: " + bakiye);
					}

				}
				break;
			case 3:
				System.out.print("Yatırmak istediğiniz tutarı giriniz: ");
				float pyatır = scanner.nextFloat();
				bakiye += pyatır;
				System.out.println("bakiyeniz: " + bakiye);
			    break;
			}
		}
		System.out.println("Kartınız iade ediliyor....");
	}
}
