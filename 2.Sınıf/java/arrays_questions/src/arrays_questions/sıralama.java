package arrays_questions;

import java.util.*;

public class sıralama {

	public static void main(String[] args) {

		int[] list = { 45, 51, 26, 1, 48 };
		int temp;

		for (int i = 0; i < list.length; i++) {
			for (int j = 1; j < list.length - i; j++) {
				if (list[j - 1] > list[j]) {
					temp = list[j - 1];
					list[j - 1] = list[j];
					list[j] = temp;
				}

			}
		}

	  System.out.println(Arrays.toString(list));
	}

}
