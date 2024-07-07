
public class Yolcu {

	private String name;
	private int id;
	private int age;

	public Yolcu(String name, int id, int age) {
		setName(name);
		setId(id);
		setAge(age);
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

}
