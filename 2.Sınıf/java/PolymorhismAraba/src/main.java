import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
        ArabaFarbrikası fabrika = new ArabaFarbrikası();
		String işlem;
        Araba araba;
		while(true) {
        	System.out.println("hangi arbadan üretmek istiyorsunuz ?");
            işlem=scanner.nextLine();
        	araba= fabrika.uret(işlem);
            if(işlem.equals("q")) {
            	System.out.println("çıkılıyor...");
                return;
            }
            
            else if (araba==null) {
            	System.out.println("yanlış marka girdiniz!");
                
            }
            else {
            	araba.bilgileri_goster();
            	araba.calistir();
            }
		}
		
		
		
	}

}
