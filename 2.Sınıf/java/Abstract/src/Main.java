import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {

		BMW bmw = new BMW("siyah", 330, "2023", "M 550d");
		Audi audi = new Audi("lacivert", 320, "2023", "A7");

		ArrayList<Car> cars = new ArrayList<Car>();
		cars.add(audi);
		cars.add(bmw);
		
		Factory fact = new Factory(cars);
		fact.startEngine();
		System.out.println("*************");
		fact.stopEngine();

	}

}
