package Lab1;

import java.util.Scanner;

public class Lab54 {
	public static void  check(String Firstname,String Lastname)throws Lab54b
	{
		if((Firstname.length()==0)||(Lastname.length()==0)){
			throw new Lab54b(Firstname);
		}
		else{
			System.out.println("Welcome"+" "+Firstname+" "+Lastname);
		}
	}
	public static void main(String[] args) {
		System.out.println("Enter your First Name");
		Scanner scanner=new Scanner(System.in);
		String Fstname=scanner.nextLine();
		System.out.println("Enetr your Last Name");
		Scanner scanner1=new Scanner(System.in);
		String Lstname=scanner1.nextLine();
		//System.out.println(Fstname);
		//System.out.println(Lstname);
		try{
			check(Fstname, Lstname);
		}
	catch (Lab54b e)
		{
		System.out.println("no name");
		}
	}
	

}


