package firstPackage;

import java.util.Scanner;

public class vucutKitleİndeksi {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.println("lütfen kilonuzu giriniz: ");
		int kilo = scanner.nextInt();
		System.out.println("lütfen boyunuzu giriniz: ");
		float boy = scanner.nextFloat();
		float kitleIndeks = (float) kilo / (boy * boy);
		System.out.println("indeks: " + kitleIndeks);

		if (kitleIndeks < 18.5) {
			System.out.println("zayıf");
		} else if (kitleIndeks > 18.5 && kitleIndeks < 25) {
			System.out.println("normal");
		} else if (kitleIndeks > 25 && kitleIndeks < 30) {
			System.out.println("fazla kilolu");
		} else {
			System.out.println("obez");
		}

	}

}
