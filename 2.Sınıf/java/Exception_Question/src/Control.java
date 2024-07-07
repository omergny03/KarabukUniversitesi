
public class Control {

	public static void kacakMi(Eleman eleman) throws KacakException {

		if (eleman.isYurtDisiIzni()) {

			throw new KacakException("Hemen polise haber verin");
		} else {
			System.out.println("İyi yolculıuklar :)");
		}
	}

	public static void vizeVarMi(Eleman eleman) throws Exception {

		if (!eleman.isVize()) {
			throw new Exception("Vizesi onaylı değil!");
		} else {
			kacakMi(eleman);
		}
	     
	
	
	
	
	
	}

}
