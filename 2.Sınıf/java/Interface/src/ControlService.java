
public class ControlService implements IService {

	public boolean control(Yolcu yolcu) {

		if (yolcu.getAge() < 18) {
			System.out.println("yaş sınırı");
			return false;
		}
		return true;
	}

  public void göster() {
	  System.out.println("asdsd");
  }
 
}
