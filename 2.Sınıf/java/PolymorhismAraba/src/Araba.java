
public class Araba {

	private String model;
	private int kapi_sayisi;
	private int beygir;

	public Araba(String model, int kapi_sayisi, int beygir) {
		this.model = model;
		this.kapi_sayisi = kapi_sayisi;
		this.beygir = beygir;
	}

	public void setModel(String model) {
		this.model = model;
	}

	public String getModel() {
		return model;
	}

	public int getKapi_sayisi() {
		return kapi_sayisi;
	}

	public void setKapi_sayisi(int kapi_sayisi) {
		this.kapi_sayisi = kapi_sayisi;
	}

	public int getBeygir() {
		return beygir;
	}

	public void setBeygir(int beygir) {
		this.beygir = beygir;
	}

	public void calistir() {
		System.out.println(model + " ve " + beygir + " li araba " + " çalışıyor");
	}

	public void bilgileri_goster() {
		System.out.println("model: " + model);
		System.out.println("kapı sayısı: " + kapi_sayisi);
		System.out.println("beygir: " + beygir);

	}

}
