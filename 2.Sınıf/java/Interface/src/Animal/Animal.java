package Animal;

public abstract class Animal implements IAnimal {

	private String color;

	public Animal(String color) {
		this.color = color;
	}

	public void eat() {
		System.out.println("hayvan yemek yer");
	}

	public abstract void run();
}
