package Problem;

public class Main {

	public static void main(String[] args) {

		Problem problem = new Problem();
		Problem.Matematik mat = problem.new Matematik();
		Problem.Fizik fiz = problem.new Fizik();

		mat.daireAlan(5);
		mat.ucgenCevre(5, 5, 5);
		fiz.icCarpım(new Vektor("hzıır"), new Vektor("ali"));

	}

}
