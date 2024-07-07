package arrays_questions;

import java.util.*;

public class tekrarEdenSayı {

	public static void main(String[] args) {

		int[] liste = { 1, 21, 15, 1, 15, 16, 48, 1, 21 };
		int[] tekrar = new int[liste.length];
		int count = 0;

		for (int i = 0; i < liste.length; i++) {
			for (int j = i + 1; j < liste.length; j++) {
				if (liste[i] == liste[j]) {
					if (!tekrar(tekrar, liste[i])) {
						tekrar[count++] = liste[i];
					}
					break;
				}
			
			}
		}
		System.out.println(Arrays.toString(tekrar));
	}

	static boolean tekrar(int[] arr, int value) {

		for (int a : arr) {
			if (a == value) {
				return true;
			}
		}
		return false;
	}

}
