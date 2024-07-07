package test;

import java.util.ArrayList;

public class soru {

	public static void main(String[] args) {
		
		
		for (int i = 1; i < 100000; i++) {
			ArrayList<Integer> liste = new ArrayList<Integer>();
			int sum = 0;
			int gecici, x;
			x = i;
			while (x != 0) {
				gecici = x % 10;
				sum += (int) Math.pow(gecici, 3);
				x = x / 10;
				liste.add(gecici);
			}
			if (i == sum) {
				System.out.print(i + " = ");
				for (int j = 0; j < liste.size(); j++) {
					System.out.print(liste.get(j) + "^3 + ");
				}
			  System.out.println("");
			}
		}

	}

}
