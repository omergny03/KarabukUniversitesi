import java.util.Scanner;

public class main {
	private static gamer_list liste = new gamer_list();
	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		System.out.println("****************");
		System.out.println("HOŞGELDİNİZ");
		System.out.println("****************");
		System.out.println("1-listele\n2-sil\n3-ara\n4-ekle\n5-güncelle\n6-çıkış");
		System.out.println("****************");
		System.out.println("işlem seçiniz: ");
		int islem = scanner.nextInt();
		while (true) {
			if (islem == 1) {
				liste.listele();

			} else if (islem == 2) {
				liste.oyuncu_sil();

			} else if (islem == 3) {
				liste.oyuncu_ara();

			} else if (islem == 4) {
				liste.oyuncu_ekle();

			} else if (islem == 5) {
				liste.oyuncu_guncelle();

			} else if (islem == 6) {
				System.out.println("ÇIKILIYOR....");
				return;
			}
			System.out.println("işlem seçiniz: ");
			islem = scanner.nextInt();
		}

	}
}