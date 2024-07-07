package Generic_3;

public class Main {

	public static void main(String[] args) {

		Sayisal s1 = new Sayisal("omer", 1, 74.5);
		Sayisal s3 = new Sayisal("faruk", 2, 86.2);
		Sozel s2 = new Sozel("veli", 864, 87.5);
		Sozel S4 = new Sozel("ali", 5, 45.1);
		Sayisal birinci = hesapla(s1, s3);
		System.out.println(birinci.getIsim() + " : " + birinci.donem_ortalamasi());
	
	}

	public static <T extends Student> T hesapla(T student1, T student2) {

		if (student1.donem_ortalamasi() > student2.donem_ortalamasi()) {
			return student1;
		} else {
			return student2;
		}
	}
}
