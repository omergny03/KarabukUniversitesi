package firstPackage;

import java.util.Scanner;

public class gelismisNotHesaplama {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		System.out.print("Öğrencinin adını giriniz: ");
		String ogrenci = scanner.nextLine();
		System.out.print("1. vize notu: ");
		int v1 = scanner.nextInt();
		System.out.print("2. vize notu: ");
		int v2 = scanner.nextInt();
		System.out.print("Final notu: ");
		int f = scanner.nextInt();
		float ort = (float)((v1 * 0.3) + (v2 * 0.3) + (f * 0.4));
		System.out.println("ortalama: "+ort);
		if (ort >= 90) {
			System.out.println("harf notu: AA");
		} else if (ort >= 85) {
			System.out.println("harf notu: BA");
		} else if (ort >= 80) {
			System.out.println("harf notu: BB");
		} else if (ort >= 75) {
			System.out.println("harf notu: CB");
		} else if (ort >= 70) {
			System.out.println("harf notu: CC");
		} else if (ort >= 65) {
			System.out.println("harf notu: DC");
		} else if (ort >= 60) {
			System.out.println("harf notu: DD");
		} else if (ort >= 55) {
			System.out.println("harf notu: FD");
		} else if (ort >= 50) {
			System.out.println("harf notu: FF");
		} else {
			System.out.println("kaldı");
		}

	}

}
