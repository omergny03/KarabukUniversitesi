import java.util.Scanner;

public class hesap {

	private int bakiye;
	private String hesapNo;
	Scanner scanner = new Scanner(System.in);

	public hesap(int bakiye, String hesapNo) {
		this.bakiye = bakiye;
		this.hesapNo = hesapNo;
	}

	public void paraYatırma(int miktar) {

		bakiye += miktar;
	}

	public void paraCekme(int miktar) {
		while (true) {
			if (bakiye - miktar < 0) {
				System.out.println("hesapta yeterince para yok");
				System.out.println("bakiye: " + bakiye);
				System.out.println("yeniden miktar giriniz: ");
				miktar = scanner.nextInt();
			} else {
				bakiye -= miktar;
				System.out.println("bakiye: " + bakiye);
				break;
			}

		}
	}

	public int getBakiye() {
		return bakiye;
	}

	public void setBakiye(int bakiye) {
		this.bakiye = bakiye;
	}

	public String getHesapNo() {
		return hesapNo;
	}

	public void setHesapNo(String hesapNo) {
		this.hesapNo = hesapNo;
	}

}
