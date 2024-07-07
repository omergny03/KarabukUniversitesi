package firstPackage;

import java.util.Scanner;

public class asalMi {

	public static boolean asalMi(int sayi) {
		for (int i = 2; i < sayi; i++) {
			if (sayi == 2) {
				return true;
			} else if (sayi % i == 0) {
				return false;
			}

		}
		return true;
	}

	public static void main(String[] args) {
		boolean x;
		for (int i = 2; i < 1000; i++) {
			x = asalMi(i);
			if (x == true) {
				System.out.println(i + " = asaldir");
			} else {
				System.out.println(i + " = asal degildir");
			}
		}

	}

}
