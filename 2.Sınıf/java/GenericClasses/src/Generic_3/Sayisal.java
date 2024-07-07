package Generic_3;

public class Sayisal extends Student {

	double donem_ort = 2.5;

	public Sayisal(String isim, int no, double ortalama) {
		super(isim, no, ortalama);

	}

	@Override
	double donem_ortalamasi() {
		return (getOrtalama() * donem_ort);
	}

}
