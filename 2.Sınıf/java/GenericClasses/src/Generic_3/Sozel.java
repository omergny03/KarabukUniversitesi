package Generic_3;

public class Sozel extends Student {

	double donem_ort = 2.25;

	public Sozel(String isim, int no, double ortalama) {
		super(isim, no, ortalama);

	}

	@Override
	double  donem_ortalamasi() {
		return (getOrtalama() * donem_ort);
	}

}
