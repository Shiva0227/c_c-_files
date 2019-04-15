package Lab1;

import java.util.Scanner;

public class Lab55 {
	public static void agee(int age) throws Lab55b
	{
		if(age<15){
			throw new Lab55b();
		}
		else{
			System.out.println("Hello!! Welcome ");
		}
	}
	public static void main(String[] args) {
		System.out.println("Enetr your Age");
		Scanner scanner=new Scanner(System.in);
		int age=scanner.nextInt();
		try
		{
			agee(age);
		}
		catch (Lab55b e)
		{
			System.out.println("Your age should be >15");
		}
	}
}
