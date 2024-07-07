package maksimum_sayi;

import java.util.Arrays;

public class main {

	public static void main(String[] args) {

		int[] list = {3,2,5,5,452,452,45,25};

		int[] sonuc = new int[2];
		sonuc = hesapla.bul(list);
		System.out.println(Arrays.toString(sonuc));
	}

}
