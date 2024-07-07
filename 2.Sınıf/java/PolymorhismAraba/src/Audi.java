
public class Audi extends Araba {


	private int silindir_sayisi;

	public Audi(String model, int kapı_sayisi, int beygir, int silindir_sayisi) {
		super(model, kapı_sayisi, beygir);
		this.silindir_sayisi = silindir_sayisi;
	}

	public int getSilindir_sayisi() {
		return silindir_sayisi;
	}

	public void setSilindir_sayisi(int silindir_sayisi) {
		this.silindir_sayisi = silindir_sayisi;
	}

	@Override
	public void bilgileri_goster() {
		super.bilgileri_goster();
	    System.out.println("silindir sayısı: "+silindir_sayisi);
	}
 
	
}
