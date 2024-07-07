package Generic_3;

public abstract class Student {

	private String isim;
	private int no;
	private double ortalama;

	public Student(String isim, int no, double ortalama) {
		setIsim(isim);
		setNo(no);
		setOrtalama(ortalama);
	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}

	public int getNo() {
		return no;
	}

	public void setNo(int no) {
		this.no = no;
	}

	public double getOrtalama() {
		return ortalama;
	}

	public void setOrtalama(double ortalama) {
		this.ortalama = ortalama;
	}

	abstract double donem_ortalamasi();

}
