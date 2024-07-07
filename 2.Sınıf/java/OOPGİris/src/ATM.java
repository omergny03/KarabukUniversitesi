import java.util.Scanner;

public class ATM {

	Scanner scanner = new Scanner(System.in);
	login ziraat = new login("omergny03", "1234");
    
    public void run() {

		System.out.println("kullanıcı adı\nşifre");
		ziraat.giris(scanner.nextLine(), scanner.nextLine());
	}

}
