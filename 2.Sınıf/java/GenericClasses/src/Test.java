
public class Test<T1, T2, T3> {

	private T1 obj1;
	private T2 obj2;
	private T3 obj3;

	public Test(T1 obj1, T2 obj2, T3 obj3) {
		setObj1(obj1);
		setObj2(obj2);
		setObj3(obj3);
	}

	public Test(T1 obj1, T2 obj2) {
		this(obj1, obj2, null);
	}

	public T1 getObj1() {
		return obj1;
	}

	public void setObj1(T1 obj1) {
		this.obj1 = obj1;
	}

	public T2 getObj2() {
		return obj2;
	}

	public void setObj2(T2 obj2) {
		this.obj2 = obj2;
	}

	public T3 getObj3() {
		return obj3;
	}

	public void setObj3(T3 obj3) {
		this.obj3 = obj3;
	}

	public String toString() {

		return ("T1: " + getObj1() + " : " + getObj1().getClass().getName() + "\n" + "T2: " + getObj2() + " : "
				+ getObj2().getClass().getName() + "\n" + "T3: " + getObj3() + " : " + getObj3().getClass().getName());
	}

}
