package Generic_2;

public class Main {

	public static void main(String[] args) {

		String[] dizi = { "ali", "veli" };
		Integer[] dizi1 = { 1, 2, 3, 4, 5 };
		Yazdir<Integer> print = new Yazdir<>(dizi1);
        print.run();
        Integer[] dizi2 = { 245,4545,45,};
        print.setDizi(dizi2);
        print.run();
      
       
        
	}

}
