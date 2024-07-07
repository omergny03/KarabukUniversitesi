import java.util.ArrayList;

public class Factory {

	ArrayList<Car> cars;

	public Factory(ArrayList<Car> cars) {
		this.cars = cars;
	}

	public void startEngine() {
		for (Car c : cars) {
			c.startEngine();
		}
	}

	public void stopEngine() {
		for (Car c : cars) {
			c.stop();
		}
	}

}
