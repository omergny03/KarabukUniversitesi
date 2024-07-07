package Printer;

public class CanonProfessional extends Printer implements IFax, IScan, IColoredPrint {

	@Override
	public void coloredPrintBehavior() {
		System.out.println("professional colored");

	}

	@Override
	public void scanBehavior() {
		System.out.println("professional scan");
	}

	@Override
	public void faxBehavior() {
		System.out.println("professional fax");
	}

	@Override
	public void print() {
		System.out.println("professional print");
	}

}
