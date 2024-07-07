import java.util.Scanner;

public class main {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		System.out.println("**IDMAN'A HOŞ GELDİNİZ**");
		System.out.println("Günlük Hedefinizi giriniz\nŞınav :\nMekik :\nSquat :");
		Idman gym = new Idman(scanner.nextInt(), scanner.nextInt(), scanner.nextInt());
		while (true) {
			System.out.println("******************************");
			System.out.println("1-Hareket yap\n2-Kalan programı öğren\n3-Çıkış");
			System.out.println("******************************");
			switch (scanner.nextInt()) {
			case 1:
				scanner.nextLine();
				System.out.println("Hareket türünü giriniz: ");
				gym.hareketYap(scanner.nextLine());
				break;
			case 2:
				gym.kalan_hareket();
				break;
			case 3:
				return;
			}

		}
	}

}
