
public class Resolution {

	private int en, boy;

	public Resolution(int en, int boy) {

		this.en = en;
		this.boy = boy;
	}

	public void goster() {
		System.out.println("en: " + en);
		System.out.println("boy: " + boy);
	}

	public int getEn() {
		return en;
	}

	public void setEn(int en) {
		this.en = en;
	}

	public int getBoy() {
		return boy;
	}

	public void setBoy(int boy) {
		this.boy = boy;
	}

}
