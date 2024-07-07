import java.util.Scanner;

public class Idman {

	private int şınav_sayısı;
	private int mekik_sayısı;
	private int squat_sayısı;
	Scanner scanner = new Scanner(System.in);

	public Idman(int şınav_sayısı, int mekik_sayısı, int squat_sayısı) {

		this.şınav_sayısı = şınav_sayısı;
		this.mekik_sayısı = mekik_sayısı;
		this.squat_sayısı = squat_sayısı;
	}

	public int getŞınav_sayısı() {
		return şınav_sayısı;
	}

	public void setŞınav_sayısı(int şınav_sayısı) {
		this.şınav_sayısı = şınav_sayısı;
	}

	public int getMekik_sayısı() {
		return mekik_sayısı;
	}

	public void setMekik_sayısı(int mekik_sayısı) {
		this.mekik_sayısı = mekik_sayısı;
	}

	public int getSquat_sayısı() {
		return squat_sayısı;
	}

	public void setSquat_sayısı(int squat_sayısı) {
		this.squat_sayısı = squat_sayısı;
	}

	public void hareketYap(String hareket_turu) {

		switch (hareket_turu) {

		case "şınav":
			System.out.println("kaç adet şınav çekmek istiyorsunuz: ");
			şınavÇek(scanner.nextInt());
			break;
		case "mekik":
			System.out.println("kaç adet mekik çekmek istiyorsunuz: ");
			mekikÇek(scanner.nextInt());
			break;
		case "squat":
			System.out.println("kaç adet squat çekmek istiyorsunuz: ");
			squatÇek(scanner.nextInt());
			break;
		default:
			System.out.println("yanlış hareket türü girdiniz!");
		}

	}

	public void şınavÇek(int adet) {
		if (şınav_sayısı == 0) {
			System.out.println("bugün yeteri kadar şınav çektiniz!");
		} else if (şınav_sayısı - adet < 0) {
			System.out.println("günlük şınav miktarını geçiyorsunuz. Lütfen yeniden giriniz");
			System.out.println("kalan adet: " + şınav_sayısı);
			şınavÇek(scanner.nextInt());
		} else {
			şınav_sayısı -= adet;
		}

	}

	public void mekikÇek(int adet) {
		if (mekik_sayısı == 0) {
			System.out.println("bugün yeteri kadar mekik çektiniz!");
		} else if (mekik_sayısı - adet < 0) {
			System.out.println("günlük mekik miktarını geçiyorsunuz. Lütfen yeniden giriniz");
			System.out.println("kalan adet: " + mekik_sayısı);
			mekikÇek(scanner.nextInt());
		} else {
			mekik_sayısı -= adet;
		}

	}

	public void squatÇek(int adet) {
		if (squat_sayısı == 0) {
			System.out.println("bugün yeteri kadar squat çektiniz!");
		} else if (squat_sayısı - adet < 0) {
			System.out.println("günlük squat miktarını geçiyorsunuz. Lütfen yeniden giriniz");
			System.out.println("kalan adet: " + squat_sayısı);
			squatÇek(scanner.nextInt());
		} else {
			squat_sayısı -= adet;
		}

	}

	public void kalan_hareket() {
		System.out.println("Şınav: " + şınav_sayısı);
		System.out.println("Mekik: " + mekik_sayısı);
		System.out.println("Squat: " + squat_sayısı);
	}

}
