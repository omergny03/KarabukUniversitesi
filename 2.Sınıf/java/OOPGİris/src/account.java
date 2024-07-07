
public class account {

	private String isim;
	private String mail;
	private double bakiye;

	public account(String isim, String mail, double bakiye) {

		this.isim = isim;
		this.mail = mail;
		this.bakiye = bakiye;
	}

	public void setMail(String mail) {
		this.mail = mail;
	}

	public String getMail() {
		return this.mail;
	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}

	public double getBakiye() {
		return bakiye;
	}

	public void setBakiye(float bakiye) {
		this.bakiye = bakiye;
	}

}
//System.out.println("isim\tmail\tbakiye");
//account hesap1 = new account(scanner.nextLine(), scanner.nextLine(), scanner.nextDouble());
//System.out.println(hesap1.getIsim() + "\n" + hesap1.getMail() + "\n" + hesap1.getBakiye());
//System.out.print("sonraki bakiyeyi giriniz: ");
//hesap1.setBakiye(scanner.nextFloat());
//System.out.println(hesap1.getIsim() + "\n" + hesap1.getMail() + "\n" + hesap1.getBakiye());
