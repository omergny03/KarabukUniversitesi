package maksimum_sayi;

public class hesapla {

	public static int[] bul(int[] arr) {

		int maks, min;
		int[] buldum = new int[2];
		maks = arr[0];
		min = arr[0];
		buldum[0] = maks;
		buldum[1] = min;
		
		for (int i = 0; i < arr.length; i++) {

			if (arr[i] > maks) {
				maks = arr[i];
				buldum[0] = maks;
			} else if (arr[i] < min) {
				min = arr[i];
				buldum[1] = min;
			}

		}

		return buldum;
	}

}
