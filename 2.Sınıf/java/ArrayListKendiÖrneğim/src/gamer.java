
public class gamer {

	private String kullanci_adi;
	private String oyun_adi;
	private String rank;

	public gamer(String kullanci_adi, String oyun_adi, String rank) {

		this.kullanci_adi = kullanci_adi;
		this.oyun_adi = oyun_adi;
		this.rank = rank;
	}

	public void setOyun_adi(String oyun_adi) {
		this.oyun_adi = oyun_adi;
	}

	public String getOyun_adi() {
		return this.oyun_adi;
	}

	public String getKullanci_adi() {
		return kullanci_adi;
	}

	public void setKullanci_adi(String kullanci_adi) {
		this.kullanci_adi = kullanci_adi;
	}

	public String getRank() {
		return rank;
	}

	public void setRank(String rank) {
		this.rank = rank;
	}

}
