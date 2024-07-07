package firstPackage;

import java.util.*;

public class ebob {

	public static int ebob(int sayi1, int sayi2) {
		int eb = 1;
		for (int i = 2; i <= sayi1 && i <= sayi2; i++) {
			if (sayi1 % i == 0 && sayi2 % i == 0) {
				eb = i;
			}

		}

		return eb;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int sayi1, sayi2;
		System.out.println("Iki adet sayi giriniz: ");
		sayi1 = scanner.nextInt();
		sayi2 = scanner.nextInt();
		System.out.println("EBOB: " + ebob(sayi1, sayi2));

	}

}
