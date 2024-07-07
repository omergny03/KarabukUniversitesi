
public class Monitor {

	private String model;
	private String uretici;
	private String boyut;
	private Resolution resolution;

	public Monitor(String model, String uretici, String boyut, Resolution resolution) {
		super();
		this.model = model;
		this.uretici = uretici;
		this.boyut = boyut;
		this.resolution = resolution;
	}

	public void monitor_kapat() {
		System.out.println("monitor kapatılıypr.....");
	}

	public Resolution getResolution() {
		return resolution;
	}

	public void setResolution(Resolution resolution) {
		this.resolution = resolution;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

	public String getUretici() {
		return uretici;
	}

	public void setUretici(String uretici) {
		this.uretici = uretici;
	}

	public String getBoyut() {
		return boyut;
	}

	public void setBoyut(String boyut) {
		this.boyut = boyut;
	}

}
