package yolSorusu;

import java.util.Random;

public class main {
	static int i = 0, j = 0;
	private static kutu[][] tablo = new kutu[4][4];

	public static void main(String[] args) {

		tabloDoldur();
		tabloGöster();
		git();
		tabloGöster();
	}

	public static void git() {

		if (tablo[0][0].getDeger() == 0) {
			System.out.println("yol yok !!");
			return;
		} else if (i == 3 &&j<2&& tablo[i][j + 1].isTahmin() == false) {
			System.out.println("çıkmaz yol");
			return;
		} else if (j == 3 && i<2&&tablo[i + 1][j].isTahmin() == false) {
			System.out.println("çıkmaz yol");
			return;
		} else {
			tablo[0][0].setDeger(2);
		}

		if (i < 3 && j < 3) {
			if (tablo[i + 1][j].isTahmin() == false && tablo[i][j + 1].isTahmin() == false) {
				System.out.println("çıkmaz yol");
				return;
			}
		}

		sağaGit();

	}

	public static void sağaGit() {
//		if (j == 4) {
//			System.out.println("sağ tarafta yol yok ");
//			aşağıGit();
		if (i == 3 && j == 3 && tablo[i][j].getDeger() == 1) {
			System.out.println("çıkışa ulaştınız");
			return;
		} else {
			if (j < 3) {
				j++;
			} else {
				aşağıGit();
			}
			if (tablo[i][j].getDeger() == 0) {
				// System.out.println("sağ taraf kapalı");
				tablo[i][j].setTahmin(false);
				j--;

				aşağıGit();
			} else {
				tablo[i][j].setDeger(2);
				git();
			}
		}

	}

	public static void aşağıGit() {
//		if (i == 4) {
//			// System.out.println("aşağıda yol yok ");
//			sağaGit();
		if (i == 3 && j == 3 && tablo[i][j].getDeger() == 1) {
			System.out.println("çıkışa ulaştınız ");
			return;
		} else {
			if (i < 3) {
				i++;
			} else {
				sağaGit();
			}
			if (tablo[i][j].getDeger() == 0) {
				// System.out.println("aşağı taraf kapalı");
				tablo[i][j].setTahmin(false);
				i--;
				git();
			} else {
				tablo[i][j].setDeger(2);
				git();
			}
		}
	}

	public static void tabloDoldur() {
	//tablo[0][0] = new kutu(1);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				Random random = new Random();
				int sayi = random.nextInt(2);
				tablo[i][j] = new kutu(sayi);
			}
		}
	}

	public static void tabloGöster() {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				System.out.print("| " + tablo[i][j].getDeger() + " |");
			}
			System.out.println("");
		}

	}

}
