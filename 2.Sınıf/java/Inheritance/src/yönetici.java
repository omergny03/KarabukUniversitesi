
public class yönetici extends calisan {

	private int sorumlu_kisi;

	public yönetici(String ad, String soyad, int id, int sorumlu_kisi) {
		super(ad, soyad, id);
		this.sorumlu_kisi = sorumlu_kisi;
	}

	public int getSorumlu_kisi() {
		return sorumlu_kisi;
	}

	public void setSorumlu_kisi(int sorumlu_kisi) {
		this.sorumlu_kisi = sorumlu_kisi;
	}

	public void bilgileri_göster() {

		super.bilgileri_göster();
		System.out.println("sorumlu kişi: " + sorumlu_kisi);
	}

	public void zam_yap(int zam) {

		System.out.println(getAd() + " çalışanlara " + zam + " tl zam yaptı");
	}

}
