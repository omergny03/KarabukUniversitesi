package Printer;

public class Main {

	public static void main(String[] args) {

		Printer printer1 = new CanonBasic();
		Printer printer2 = new CanonOffice();
		Printer printer3 = new CanonProfessional();

		Printer[] printers = { printer1, printer2, printer3 };

		for (Printer p : printers) {
			if (p instanceof IFax) {
				((IFax) p).faxBehavior();
			}
		}
	}

}
