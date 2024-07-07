
public class KacakException extends Exception {

	public KacakException(String message) {
		super(message);
	}

	@Override
	public void printStackTrace() {
		System.out.println("kişi kaçaktır");
	}

}
