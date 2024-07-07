import java.util.Scanner;

public class login {

	Scanner scanner = new Scanner(System.in);
	private String kullanıcıAdi;
	private String parola;
	int girisHakki = 3;

	public void giris(String username, String password) {

		while (girisHakki != 0) {
			if (kullanıcıAdi.equals(username) && parola.equals(password)) {

				System.out.println("giris başarılı");
				break;
			} else if (kullanıcıAdi.equals(username) && !parola.equals(password)) {

				System.out.println("parolanız yanlış");
				girisHakki--;
				if (girisHakki == 0) {
					break;
				}
				System.out.println("giriş hakkı: " + girisHakki);
				System.out.println("tekrar şifre giriniz: ");
				password = scanner.nextLine();

			} else if (!kullanıcıAdi.equals(username) && parola.equals(password)) {

				System.out.println("kullanııcı adı yanlış");
				girisHakki--;
				if (girisHakki == 0) {
					break;
				}
				System.out.println("giris hakkı: " + girisHakki);
				System.out.println("tekrar kullanı adı giriniz: ");
				username = scanner.nextLine();
			} else {

				System.out.println("kullanıcı adı ve parola yanlış");
				girisHakki--;
				if (girisHakki == 0) {
					break;
				}
				System.out.println("giris hakkı: " + girisHakki);
				System.out.println("tekrar kullanıcı adı ve parola giriniz: ");
				username = scanner.nextLine();
				password = scanner.nextLine();

			}
		}
		if (girisHakki == 0) {
			System.out.println("giriş hakkınız bitmiştir lütfen bankayla iletişime geçiniz");
		} else {

			hesap öfg = new hesap(4000, "2110206050");
			int bool = 1;
			while (bool != 0) {
				System.out.println("***********************");
				System.out.println("1-Para Yatırma\n2-Para çekme\n3-Bakiye\n4-Çıkış");
				System.out.println("***********************");
				String islem = scanner.nextLine();
				int miktar;
				switch (islem) {

				case "1":
					System.out.println("yatırmak istediginiz miktarı giriniz: ");
					miktar = scanner.nextInt();
					scanner.nextLine();//DUMMY
					öfg.paraYatırma(miktar);
					System.out.println("bakiye: " + öfg.getBakiye());
					break;
				case "2":
					System.out.println("çekmek istediginiz miktarı giriniz: ");
					miktar = scanner.nextInt();
					scanner.nextLine();//DUMMY
					öfg.paraCekme(miktar);
					break;
				case "3":
					System.out.println("bakiye: " + öfg.getBakiye());
					break;
				case "4":
					bool = 0;
					break;
				}

			}

		}
	}

	public login(String kullaniciAdi, String parola) {
		this.kullanıcıAdi = kullaniciAdi;
		this.parola = parola;
	}

	public String getKullanıcıAdi() {
		return kullanıcıAdi;
	}

	public void setKullanıcıAdi(String kullanıcıAdi) {
		this.kullanıcıAdi = kullanıcıAdi;
	}

	public String getParola() {
		return parola;
	}

	public void setParola(String parola) {
		this.parola = parola;
	}

}
