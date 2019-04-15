package Lab1;

import java.util.Scanner;
import java.util.function.Function;

public class Lab135 {

	static int fact(int n)
	{
		System.out.println("Enter the number for which you want to find factorial");
		Scanner sc=new Scanner(System.in);
		int n1=sc.nextInt();
		int fact=1;
		for(int i=1;i<=n1;i++)
		{
			fact=fact*i;
		}
		return fact;
	}
	public static void main(String[] args) {
		Function<Integer,Integer> f1=Lab135::fact;
		System.out.println("Factorial of a number :"+f1.apply(5));
		
	}
}
