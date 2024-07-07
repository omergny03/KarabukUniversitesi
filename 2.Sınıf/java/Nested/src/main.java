
public class main {

	public static void main(String[] args) {
		// non-static
//		Out out = new Out();
//		Out.In in = out.olustur();
//		in.göster();
		// --------------------------------

//		 Out1.In1 in1 = new Out1.In1();
//		 in1.göster();

		// Local.olustur();

		Anonim anonim1 = new Anonim(1) {

			@Override
			public void run() {
				System.out.println("bu nesneye ait run metodu ");
				// hebele();
				System.out.println(getId());
			}

			public void hebele() {
				System.out.println("hebelehübele");
			}
		};
		Anonim anonim2 = new Anonim(2);
		anonim1.run();
		anonim2.run();

		// Family.ALI.göster();

	}

}
