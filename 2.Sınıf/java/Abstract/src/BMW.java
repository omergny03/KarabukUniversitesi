
public class BMW extends Car{
  
	private String seri;
	
	public BMW(String color, int maxSpeed, String model,String seri) {
		super(color,maxSpeed,model);
		setSeri(seri);
	}
	
	public void startEngine() {
		System.out.println(getSeri()+" BMW araci motoru calistirdi");
	}
    public void stop() {
    	System.out.println(getSeri()+" BMW araci motoru durdurdu");
    }

	public String getSeri() {
		return seri;
	}

	public void setSeri(String seri) {
		this.seri = seri;
	}
	
	
}
