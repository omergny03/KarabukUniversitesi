
public class Security extends Officer {

	private boolean belge;

	public Security(String adSoyad, String telefon, String mail, String departman, String mesai, boolean belge) {
		super(adSoyad, telefon, mail, departman, mesai);
		this.belge = belge;

	}

	public boolean isBelge() {
		return belge;
	}

	public void setBelge(boolean belge) {
		this.belge = belge;
	}

	public void nöbet() {
		System.out.println("güvenlik nöbet yerinde!");

	}

	public void bilgileri_göster() {
		super.bilgileri_göster();
		if (this.isBelge() == true) {
			System.out.println("belge = " + "Güvenliğin belgesi var");
		} else {
			System.out.println("belge = " + "Güvenliğin belgesi maalesef yok ");
		}
	}

}
