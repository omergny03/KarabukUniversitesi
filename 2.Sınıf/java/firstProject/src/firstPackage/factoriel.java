package firstPackage;

import java.util.Scanner;

public class factoriel {

	public static void main(String[] args) {
	 
      Scanner scanner = new Scanner(System.in);
      System.out.print("farköriyelini hesaplamak istediğiniz sayıyı giriniz: ");
	  int n = scanner.nextInt();
	  int i,j=1;
//	  for(i=1;i<=n;i++) {
//		  
//		  j=j*i;
//		  
//	  }
//	System.out.println(n+"! = "+j);
//	
	   i=1;
	  while(i<=n) {
	   
	  j=j*i;
	  i++;
	  }	
	  System.out.println(n+"! = "+j);
	}

}
