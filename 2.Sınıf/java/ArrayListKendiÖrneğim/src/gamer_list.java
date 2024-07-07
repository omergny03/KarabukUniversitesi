import java.util.ArrayList;
import java.util.Scanner;

public class gamer_list {

	private ArrayList<gamer> gamers = new ArrayList<gamer>();
	private Scanner scanner = new Scanner(System.in);

	public void listele() {
		System.out.println("oyuncu sayısı: " + gamers.size());
		for (int i = 0; i < gamers.size(); i++) {
			System.out.println((i + 1) + ". oyuncu ismi: " + gamers.get(i).getKullanci_adi());
			System.out.println((i + 1) + ". oyuncu adı: " + gamers.get(i).getOyun_adi());
			System.out.println((i + 1) + ". oyuncu rankı: " + gamers.get(i).getRank());
		}

	}

	public void oyuncu_sil() {
		System.out.println("silmek istediğiniz oyuncunun indeksini giriniz: ");
		int indeks = scanner.nextInt();
		gamers.remove(indeks);
	}

	public void oyuncu_ara() {
		System.out.println("ulaşmak istediğiniz oyuncunun indeksini giriniz: ");
		int indeks = scanner.nextInt();
		if (indeks != -1) {
			System.out.println("oyuncu ismi: " + gamers.get(indeks).getKullanci_adi());
			System.out.println("oyuncu adı: " + gamers.get(indeks).getOyun_adi());
			System.out.println("oyuncu rankı: " + gamers.get(indeks).getRank());
		} else {
			System.out.println("aradığın oyuncu bulunamadı!!");
		}
	}

	public void oyuncu_ekle() {
		System.out.println("yeni oyuncunun kullanıcı adını,oyun adını ve rankını giriniz: ");
		String kullanici_adi = scanner.nextLine();
		String oyun_adi = scanner.nextLine();
		String rank = scanner.nextLine();
		gamers.add(new gamer(kullanici_adi, oyun_adi, rank));

	}

	public void oyuncu_guncelle() {
		System.out.println("güncellemek istediğiniz oyuncunun indeksini giriniz: ");
		int indeks = scanner.nextInt();
		scanner.nextLine(); // DUMMY
		System.out.println("güncellemek istediğiniz özelliği yazınız:");
		System.out.println("--------------------------------");
		System.out.println("--> kullanıcı adı" + "--> oyun adı " + "--> rank");
		System.out.println("--------------------------------");
		String secim = scanner.nextLine();
		switch (secim) {
		case "kullanıcı adı":
			System.out.println("yeni kullanıcı adı giriniz: ");
			gamer gecici = new gamer(scanner.nextLine(), gamers.get(indeks).getOyun_adi(),
					gamers.get(indeks).getRank());
			gamers.set(indeks, gecici);
			break;
		case "oyun adı":
			System.out.println("yeni oyun adı giriniz: ");
			gamer gecici1 = new gamer(gamers.get(indeks).getKullanci_adi(), scanner.nextLine(),
					gamers.get(indeks).getRank());
			gamers.set(indeks, gecici1);
			break;
		case "rank":
			System.out.println("yeni rank giriniz: ");
			gamer gecici2 = new gamer(gamers.get(indeks).getKullanci_adi(), gamers.get(indeks).getOyun_adi(),
					scanner.nextLine());
			gamers.set(indeks, gecici2);
			break;
		}

	}

}
