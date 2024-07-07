package merak;

public class bmw extends Car {

	int beygir;

	public bmw(String name, int beygir) {
		super(name);
		this.beygir = beygir;
	}

	@Override
	public String toString() {
		return name + "-" + this.beygir;
	}
    
	public void start() {
		System.out.println("araba çalıştı");
	}
}
