
public enum Family {

	ALI("bulaşık"), VELI("ev süpürme");

	private String görev;

	private Family(String görev) {
		this.görev = görev;
	}

	public String getGörev() {
		return görev;
	}

	public void setGörev(String görev) {
		this.görev = görev;
	}

	public void göster() {

		switch (this.görev) {

		case "bulaşık":
			System.out.println("mutfak sorumlusu");
			break;
		}

	}

}
