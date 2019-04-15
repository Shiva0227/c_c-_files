package Lab1;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Lab87 {
	public static Pattern p=Pattern.compile("[A-Za-z]{8}[_]{1}[j]{1}[o]{1}[b]{1}");
	
	public static boolean validateuser(String username)
	{
		Matcher m=p.matcher(username);
		
		if(m.matches())
		{
			return true;
		}
		return false;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the User name to validate");
		String name=sc.next();
		
		
		System.out.println("Entered user name: "+" "+name+" "+validateuser(name));
		
		
	}
}
