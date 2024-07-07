package Generic_2;

public class Yazdir<T> {
	private T[] dizi;

	public Yazdir(T[] dizi) {
		this.dizi = dizi;
	}

	public void run() {
		for (T t : dizi) {
			System.out.println(t);
		}
	}

	public void setDizi(T[] dizi) {
		this.dizi = dizi;
	}

}
