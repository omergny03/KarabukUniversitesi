
public class Main {

	public static void main(String[] args) throws Exception {

		Eleman e1 = new Eleman("Ali", false, false);

		try {
			Control.vizeVarMi(e1);

		} catch (KacakException e) {
			e.printStackTrace();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
