package Animal;

public class Cat extends Animal implements IAnimal {

	private String tür;

	public Cat(String color, String tür) {
		super(color);
		this.tür = tür;
	}

	public void run() {
		System.out.println("kedi yürüyor");
	}
}
