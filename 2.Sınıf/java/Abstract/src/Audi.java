
public class Audi extends Car {

	private String kasa;

	public Audi(String color, int maxSpeed, String model, String kasa) {
		super(color, maxSpeed, model);
		setKasa(kasa);
	}

	public void startEngine() {
		System.out.println(getKasa() + " audi araci motoru calistirdi");
	}

	public void stop() {
		System.out.println(getKasa() + " audi araci motoru durdurdu");
	}

	public String getKasa() {
		return kasa;
	}

	public void setKasa(String kasa) {
		this.kasa = kasa;
	}

}
