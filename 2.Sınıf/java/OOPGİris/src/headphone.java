
public class headphone {

	private int fiyat;
	private String amac;
	private String seriNo;

	public headphone(String seriNo, String amac) {

		this(seriNo, amac, 0);

	}

	public headphone(String seriNo, String amac, int fiyat) {
		this.seriNo = seriNo;
		this.amac = amac;
		this.fiyat = fiyat;

	}

	public int getFiyat() {
		return this.fiyat;
	}

	public void setFiyat(int fiyat) {
		this.fiyat = fiyat;

	}

	public String getAmac() {
		return this.amac;
	}

	public void setSeriNo(String seriNo) {
		this.seriNo = seriNo;
	}

	public void setAmac(String amac) {
		this.amac = amac;

	}

	public String getSeriNo() {
		return this.seriNo;
	}

}

//headphone logitech = new headphone("1353212","oyuncu kulaklığı");
//System.out.println(logitech.getSeriNo());
//System.out.println(logitech.getAmac());
//System.out.println(logitech.getFiyat());
