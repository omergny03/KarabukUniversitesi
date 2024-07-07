
public class yazilimci extends calisan {

	private String diller;

	public yazilimci(String ad, String soyad, int id, String diller) {

		super(ad, soyad, id);
		this.diller = diller;

	}

	public String getDiller() {
		return diller;
	}

	public void setDiller(String diller) {
		this.diller = diller;
	}

	public void bilgileri_göster() {

		System.out.println("çalışan bilgileri: ");
		System.out.println("ad: " + getAd());
		System.out.println("soyad: " + getSoyad());
		System.out.println("id: " + getId());
		System.out.println("diller: " + diller);
	 
	}

	public void format_at(String isletim_sistemi) {

		System.out.println(getAd() + " " + isletim_sistemi + " işletim sistemini yüklüyor.");
        
	}
   
}
