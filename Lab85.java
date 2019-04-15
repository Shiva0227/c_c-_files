package Lab1;

import java.util.Arrays;
import java.util.Scanner;

import Friday5.MainExecuteThread;

public class Lab85 {
	
public static boolean isPositiveString(String name)
{
	int len=name.length();
	char[] ch=new char[len];
	for(int i=0;i<len;i++)
	{
		ch[i]=name.charAt(i);
	}
	Arrays.sort(ch);
	for(int i=0;i<len;i++)
	{
		if(ch[i]!=name.charAt(i))
		{
			return false;
		}
	}
	return true;
}
public static void main(String[] args) {
	
	Scanner sc=new Scanner(System.in);
	String name;
	System.out.println("Enter the String:");
	name=sc.nextLine();
	if(isPositiveString(name)) {
		System.out.println("The Entered String is Positive");
	}
	else
	{
		System.out.println("The entered String is negative");
	}
	
}
}
