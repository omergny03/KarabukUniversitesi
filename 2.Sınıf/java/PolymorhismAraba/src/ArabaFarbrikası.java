
public class ArabaFarbrikası {

	public Araba uret(String marka) {

		if (marka.equals("BMW")) {
			return new BMW("420d", 2, 380, 4);
		}
		else if(marka.equals("Audi")) {
			return new Audi("A8",4,450,6);
		}
		else {
			return null;
		}
	}

}