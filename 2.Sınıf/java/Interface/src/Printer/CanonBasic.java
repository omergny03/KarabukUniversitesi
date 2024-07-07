package Printer;

public class CanonBasic extends Printer implements IScan {

	@Override
	public void print() {
		System.out.println("basic print");
	}

	@Override
	public void scanBehavior() {
		System.out.println("basic scan");

	}
}
