package Problem;

public class Problem {

	public class Matematik {

		public void daireAlan(int yaricap) {
			System.out.println("Dairenin alano: " + (Math.pow(yaricap, 2)) * Math.PI);
		}

		public void ucgenCevre(int k1, int k2, int k3) {
			System.out.println("Ucgen cevre: " + (k1 + k2 + k3));
		}

	}

	public class Fizik {

		public void icCarpım(Vektor v1, Vektor v2) {

			System.out.println("ic caarpım: " + (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ()));
		}
	}

}
