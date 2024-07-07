package Soru;

public class MyList<T> {

	public T[] array;

	public MyList() {
		this.array = (T[]) new Object[10];
	}

	public MyList(int capacity) {
		this.array = (T[]) new Object[capacity];
	}

	public void add(T obj) {

		if (size() == getCapacity()) {
			this.array = resizeArray(array, getCapacity() * 2);
		} else {
			int i = 0;
			while (array[i] != null) {
				i++;
			}
			array[i] = obj;
		}

	}

	public T get(int x) {
		return (T) array[x];
	}

	public int size() {
		int i = 0;
		while (array[i] != null ) {
			i++;
		}
		return i;
	}

	public int getCapacity() {
		return array.length;
	}

	private T[] resizeArray(T[] array, int newSize) {
		T[] newArray = (T[]) new Object[newSize];
		System.arraycopy(array, 0, newArray, 0, array.length);
		return newArray;
	}

}
