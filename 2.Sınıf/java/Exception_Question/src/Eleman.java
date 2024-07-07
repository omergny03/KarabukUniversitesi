
public class Eleman {

	private String name;
	private boolean yurtDisiIzni;
	private boolean vize;

	public Eleman(String name, boolean yurtDisiIzni, boolean vize) {
		setName(name);
		setYurtDisiIzni(yurtDisiIzni);
		setVize(vize);

	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean isYurtDisiIzni() {
		return yurtDisiIzni;
	}

	public void setYurtDisiIzni(boolean yurtDisiIzni) {
		this.yurtDisiIzni = yurtDisiIzni;
	}

	public boolean isVize() {
		return vize;
	}

	public void setVize(boolean vize) {
		this.vize = vize;
	}

}
