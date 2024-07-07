
public class ServiceControl {

	private IService IService;

	public ServiceControl(IService IService) {
		this.IService = IService;
	}
   
	public void  signUp(Yolcu yolcu) {
		
		if(IService.control(yolcu)) {
			System.out.println("yolcu geçebilir");
		}
		else {
			System.out.println("yolcu geçemez!");
		}
	}


}
