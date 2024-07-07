package sayı_tahmin;

import java.util.Random;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		Random random = new Random();

		int pcSayi = random.nextInt(10);
		System.out.println(pcSayi);
		int denemeHakkı = 3, deneme;
		

		while (denemeHakkı != 0) {
	         
			System.out.println("sayı giriniz:");
			deneme = scanner.nextInt();
			if(isTrue(pcSayi, deneme)) {
				System.out.println("tahmininz doğru!");
				break;
			}
			else {
				System.out.println("yanlış tahmin");
				System.out.println("kalan deneme hakkı: "+--denemeHakkı);
			    
			}
		}
	  if(denemeHakkı==0) {
		  System.out.println("oyunu kaybettiniz");
	  }
	}
	

	static boolean isTrue(int pc, int tahmin) {
		if (pc == tahmin) {
			return true;
		} else {
			return false;
		}

	}

}
