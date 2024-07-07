
public class main {

	public static void main(String[] args) {
		
		Resolution resolution = new Resolution(1920,1080);
		Monitor monitor = new Monitor("x model","Asus","20 inç",resolution);
		Kasa kasa = new Kasa("x kasa","hp","magnezyum");
		Anakart anakart = new Anakart("x anakart","asus",10,"windows 11 pro");
		Bilgisayar pc = new Bilgisayar(anakart,kasa,monitor);
		
		pc.getKasa().bilgisayarı_ac();
		System.out.println(pc.getAnakart().getModel());
		pc.getMonitor().getResolution().goster();
		Resolution resolution1 = new Resolution(2080,1920);
		pc.getMonitor().setResolution(resolution1);
	    pc.getMonitor().getResolution().goster();
	}  

}
