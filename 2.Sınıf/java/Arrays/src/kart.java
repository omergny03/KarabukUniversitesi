
public class kart {
	private char değer;
	private boolean tahmin = false;

	public kart(char değer) {

		this.değer = değer;
	}

	public char getDeğer() {
		return değer;
	}

	public void setDeğer(char değer) {
		this.değer = değer;
	}

	public boolean isTahmin() {
		return tahmin;
	}

	public void setTahmin(boolean tahmin) {
		this.tahmin = tahmin;
	}

}
