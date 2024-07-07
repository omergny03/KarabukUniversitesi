
public class Main {

	public static void main(String[] args) {

	  ServiceControl service = new ServiceControl(new ControlService());
	
	   service.signUp(new Yolcu("Ömer",13231,25));
	
	  IService x = new ControlService();
	  
	  ((ControlService)x).göster();
	}
}
