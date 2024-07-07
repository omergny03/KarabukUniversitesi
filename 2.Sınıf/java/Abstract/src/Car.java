
public abstract class Car {

	private int maxSpeed;
	private String color;
	private String model;

	public Car(String color, int maxSpeed, String model) {
		setColor(color);
		setMaxSpeed(maxSpeed);
        setModel(model);
	}

	public abstract void startEngine();

	public abstract void stop();

	public int getMaxSpeed() {
		return maxSpeed;
	}

	public void setMaxSpeed(int maxSpeed) {
		this.maxSpeed = maxSpeed;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

}
