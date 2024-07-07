package firstPackage;

import java.util.Scanner;

public class scanner {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

//---------------------------------------------------------------------
//		System.out.println("lütfen yaşınızı giriniz: ");
//		int yaş = scanner.nextInt();
//		System.out.println("yaş :"+yaş);
//---------------------------------------------------------------------	

//		if(scanner.hasNextInt()) {
//			
//			int sayi = scanner.nextInt();
//			System.out.println("sayi: "+sayi);
//		}
//		else {
//			
//			System.out.println("lüten sayi giriniz!!");
//		}
//---------------------------------------------------------------------

//		System.out.println("giriniz: ");
//		
//		  if (scanner.hasNextInt()) {
//			int sayi = scanner.nextInt();
//			System.out.println("sayi: " + sayi);
//		} else if (scanner.hasNextDouble()) {
//			double d = scanner.nextDouble();
//			System.out.println("ondalık: " + d);
//		}else if (scanner.hasNextLine()) {
//			String str = scanner.nextLine();
//			System.out.println("yazı: " + str); 
//		}else {
//			System.out.println("yanlış tarzda giriş yaptınız!!");
//		}	

//---------------------------------------------------------------------		

		int yas = scanner.nextInt();  //INT VEYA DOUBLE DAN SONRA STRİNG ALIRSAK DUMMY KULLANMAMIZ GEREK 
		scanner.nextLine();   //DUMMY
		String isim = scanner.nextLine(); //STRİNGİ BAŞA ALSAYDIK SORUN OLMAZDI ÇÜNKÜ \N İ İÇİNE ALIRDI
		System.out.println("yas: "+yas);
		System.out.println("isim: "+isim);  
		  
//---------------------------------------------------------------------			  
		
		
		
		

		
		
		
		
	}

}
