package Lab1;

import java.util.Scanner;

public class Lab56 {
	public static void salary1(int salary)throws  Lab56b
	{
		if(salary<3000)
		{
			throw new Lab56b();
		}
		else{
			System.out.println("im ok with your salary");
		}
	}

	public static void main(String[] args) {
		System.out.println("Enter salary");
		Scanner scanner=new Scanner(System.in);
		int salary=scanner.nextInt();
				try{
					salary1(salary);
				}
				catch(Lab56b e)
				{
					System.out.println("im not ok with your salary");
				}
	}
}
