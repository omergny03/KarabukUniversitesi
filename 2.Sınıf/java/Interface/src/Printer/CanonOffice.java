package Printer;

public class CanonOffice extends Printer implements IScan, IFax {

	public void print() {
		System.out.println("office print");
	}

	@Override
	public void faxBehavior() {
		System.out.println("office fax");
		
	}

	@Override
	public void scanBehavior() {
		System.out.println("office scan");

	}
}
