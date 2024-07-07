import java.util.Scanner;

public class hospital {

	private String adSoyad;
	private String kanGrubu;
	private String hastalıkDurumu;
	private int yas;

	public hospital(String adSoyad, String kanGrubu, String hastalıkDurumu, int yas) {
		this.adSoyad = adSoyad;
		this.kanGrubu = kanGrubu;
		this.hastalıkDurumu = hastalıkDurumu;
		this.yas = yas;

	}

	public hospital(String adSoyad, String kanGrubu, int yas) {
		this.adSoyad = adSoyad;
		this.kanGrubu = kanGrubu;
		this.yas = yas;

	}

	public String getAdSoyad() {
		return this.adSoyad;
	}

	public void setAdSoyad(String adSoyad) {
		this.adSoyad = adSoyad;
	}

	public String getKanGrubu() {
		return this.kanGrubu;
	}

	public void setKanGrubu(String kanGurubu) {
		this.kanGrubu = kanGrubu;
	}

	public String getHastalıkDurumu() {
		return this.hastalıkDurumu;
	}

	public void setHastalıkDurumu(String hastalıkDurumu) {
		this.hastalıkDurumu = hastalıkDurumu;
	}

	public int getYas() {
		return this.yas;
	}

	public void setYas(int yas) {
		this.yas = yas;
	}

}
//
//public static boolean uyusma(String yabanciKan, String hasta) {
//	if (hasta.equals(yabanciKan)) {
//		return true;
//	} else {
//		return false;
//	}
//
//}
//
//public static void main(String[] args) {
//	Scanner scanner = new Scanner(System.in);
//    
//	System.out.println("kan veren kişinin bilgilerini giriniz:");
//	System.out.println("ad soyad\n" + "kan grubu\n" + "hastalık durumu\n" + "yas");
//	hospital gönüllü1 = new hospital(scanner.nextLine(), scanner.nextLine(), scanner.nextLine(), scanner.nextInt());
//	scanner.nextLine(); //DUMMY
//	System.out.println("hastanın bilgilerini giriniz:");
//	System.out.println("ad soyad\n" + "kan grubu\n" + "yas");
//	hospital hasta1 = new hospital(scanner.nextLine(), scanner.nextLine(), scanner.nextInt());
//
//	if (uyusma(gönüllü1.getKanGrubu(),hasta1.getKanGrubu())) {
//		System.out.println("gönüllü kan bağışlayabilir.");
//	} else {
//		System.out.println("kan uyuşmazlığı var!");
//	}
//}