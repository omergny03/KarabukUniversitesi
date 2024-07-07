import java.util.Scanner;

public class main {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		System.out.println("*********** çalışanlar programına hoş geldiniz ************");
		System.out.println("-----------------------------");
		System.out.println("1-yazılımcı işlemleri\n2-yönetici işlemleri\n3-çıkış");
		System.out.println("-----------------------------");
		String işlem;
		while (true) {
			System.out.print("işlem seçiniz: ");
			işlem = scanner.nextLine();
			if (işlem.equals("3")) {
				System.out.println("PROGRAMDAN ÇIKILIYOR....");
				return;
			} else if (işlem.equals("1")) {
				yazilimci ömer = new yazilimci("ömer faruk", "güney", 211202, "java ve c");
				System.out.println("YAZILIMCI MENÜSÜNE HOŞ GELDİNİZ");
				System.out.println("-----------------------------");
				System.out.println("1-format atma\n2-bilgileri göster\n3-çıkış");
				System.out.println("-----------------------------");
				String yazılım_işlem;
				while (true) {
					System.out.println("**************");
					System.out.print("işlem seçiniz: ");
					yazılım_işlem = scanner.nextLine();
					if (yazılım_işlem.equals("3")) {
						System.out.println("YAZILIM MENÜSÜNDEN ÇIKILIYOR...");
						break;
					} else if (yazılım_işlem.equals("1")) {
						System.out.print("işletim sistemi giriniz: ");
						String isletim_sistemi = scanner.nextLine();
						ömer.format_at(isletim_sistemi);

					} else if (yazılım_işlem.equals("2")) {
						ömer.bilgileri_göster();
					} else {
						System.out.println("menüde olmayan bir işlem girdiniz\nLÜTFEN TEKRAR GİRİNİZ");
					}

				}

			} else if (işlem.equals("2")) {
				yönetici yönetici = new yönetici("arif", "atasoy", 1234, 15);
				System.out.println("YÖNETİCİ MENÜSÜNE HOŞ GELDİNİZ");
				System.out.println("-----------------------------");
				System.out.println("1-zam yapma\n2-bilgileri göster\n3-çıkış");
				System.out.println("-----------------------------");
				String yönetim_işlem;
				while (true) {
					System.out.println("**************");
					System.out.print("işlem seçiniz: ");
					yönetim_işlem = scanner.nextLine();
					if (yönetim_işlem.equals("3")) {
						System.out.println("YÖNETİM MENÜSÜNDEN ÇIKILIYOR...");
						break;
					} else if (yönetim_işlem.equals("1")) {
						System.out.print("zam miktarını giriniz: ");
						int zam = scanner.nextInt();
						scanner.nextLine(); // DUMMY
						yönetici.zam_yap(zam);
					} else if (yönetim_işlem.equals("2")) {
						yönetici.bilgileri_göster();
					} else {
						System.out.println("menüde olmayan bir işlem girdiniz\nLÜTFEN TEKRAR GİRİNİZ");
					}

				}

			} else {
				System.out.println("menüde olmayan bir işlem girdiniz\nLÜTFEN TEKRAR GİRİNİZ");
			}

		}

	}
}