 
public class Officer extends Worker {

	private String departman;
	private String mesai;

	public Officer(String adSoyad, String telefon, String mail, String departman, String mesai) {
		super(adSoyad, telefon, mail);
		this.departman = departman;
		this.mesai = mesai;
	}

	public String getDepartman() {
		return this.departman;
	}

	public void setDepartman(String departman) {
		this.departman = departman;
	}

	public String getMesai() {
		return this.mesai;
	}

	public void setMesai(String mesai) {
		this.mesai = mesai;
	}

	public void work() {
		System.out.println(getAdSoyad() + " " + getMesai() + " saatleri arasında çalışıyor");
	}

	public void bilgileri_göster() {
		super.bilgileri_göster();
		System.out.println("departman = " + this.departman);
		System.out.println("mesai = " + this.mesai);
	}

}
