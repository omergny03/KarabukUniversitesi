package firstPackage;

import java.util.*;

public class carpımTablosu {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int i, j;
		for (i = 1; i <= 10; i++) {
			for (j = 1; j <= 10; j++) {
				System.out.println(i+" * "+j+" = "+(i*j));
			}
         System.out.println("-----------------");
		}

	}

}
