
public class Out {

	public String yonetici = "Ali";

	public class In {
        public String himaye = "Hakan";
        
        void göster() {
        	System.out.println(Out.this.yonetici + "'nin himayesinde olan kişi: "+this.himaye);
        }
		
	}
   void göster() {
	   In in = new In();
	   in.göster();
   }
   In olustur() {
	   return new In();
   }
	
	
}
