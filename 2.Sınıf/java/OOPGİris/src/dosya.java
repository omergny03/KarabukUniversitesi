
public class dosya {

	private int seriNo;
	private String adiSoyadi;
	private int tutar;

	public int getSeriNo() {
		if (this.seriNo == 0) {
			System.out.println(this.adiSoyadi + " kişiye ait dosya seri numarası yoktur");
		}

		return seriNo;
	}

	public void setSeriNo(int seriNo) {
		this.seriNo = seriNo;
	}

	public String getAdiSoyadi() {
		return this.adiSoyadi;
	}

	public void setAdiSoyadi(String adiSoyadi) {
		this.adiSoyadi = adiSoyadi;
	}

	public int getTutar() {
		return this.tutar;
	}

	public void setTutar(int tutar) {
		this.tutar = tutar;
	}

	public static void bos() {
		System.out.println("lalallall");
	}

}

//dosya pc = new dosya();
//System.out.println("dosyanın seri nosunu giriniz: ");
//pc.setSeriNo(scanner.nextInt());
//scanner.nextLine();//DUMMY
//System.out.println("dosya sahibinin adını soyadını giriniz: ");
//pc.setAdiSoyadi(scanner.nextLine());
//System.out.println("fatura tutarını giriniz: ");
//pc.setTutar(scanner.nextInt());
//System.out.println(pc.getSeriNo()+"\n"+pc.getAdiSoyadi()+"\n"+pc.getTutar());
//