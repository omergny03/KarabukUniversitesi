package Problem;

import java.util.Scanner;

public class Vektor {
	private String isim;
	private int x;
	private int y;
	private int z;

	public Vektor(String isim) {
		setIsim(isim);

		Scanner scanner = new Scanner(System.in);
		System.out.println("vektör için x,y,z degerlerini giriniz: ");
		setX(scanner.nextInt());
		setY(scanner.nextInt());
		setZ(scanner.nextInt());

	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		this.z = z;
	}

}
