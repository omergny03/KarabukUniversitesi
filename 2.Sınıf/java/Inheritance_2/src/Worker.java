
public class Worker {

	private String adSoyad;
	private String telefon;
	private String mail;

	public Worker(String adSoyad, String telefon, String mail) {
		this.adSoyad = adSoyad;
		this.telefon = telefon;
		this.mail = mail;
	}

	public String getAdSoyad() {
		return this.adSoyad;
	}

	public void setAdSoyad(String adSoyad) {
		this.adSoyad = adSoyad;
	}

	public String getTelefon() {
		return this.telefon;
	}

	public void setTelefon(String telefon) {
		this.telefon = telefon;
	}

	public String getMail() {
		return this.mail;
	}

	public void setMail(String mail) {
		this.mail = mail;
	}

	public void enterance() {
		System.out.println(getAdSoyad() + " üniversiteye giriş yaptı!");
	}

	public void exit() {
		System.out.println(getAdSoyad() + " üniversiteden çıkış yaptı!");
	}

	public void diningHall() {
		System.out.println(getAdSoyad() + " yemekhaneye giriş yaptı!");
	}

	public void bilgileri_göster() {
		System.out.println("ad soyad = " + this.getAdSoyad());
		System.out.println("telefon = " + this.getTelefon());
		System.out.println("mail = " + this.getMail());
	}

}
