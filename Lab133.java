package Lab1;

import java.util.Scanner;
import java.util.function.BiFunction;

public class Lab133 {

	public static void main(String[] args) {
	BiFunction<String,String,Boolean> m=(str,str1)->
	{
		String abc="shiva";
		String xyz="12345";
		System.out.println("Enter the user name");
		Scanner sc=new Scanner(System.in);
		str=sc.nextLine();
		System.out.println("Enter the password");
		str1=sc.nextLine();
		
		if(str.equals(abc)&&str1.equals(xyz))
		{
			System.out.println("login successfull");
			return true;
		}
		System.out.println("login failed ");
		return false;
		
	};
	System.out.println(m.apply("str", "str1"));
	}
}