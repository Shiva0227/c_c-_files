package Lab1;

import java.util.Scanner;

public class Lab51 {
public static void main(String[] args) {
	
	System.out.println("Menu");
	System.out.println("1.Red");
	System.out.println("2.Yellow");
	System.out.println("3.Green");
	Scanner scanner=new Scanner(System.in);
	System.out.println("Enter the option");
	int input=scanner.nextInt();
	switch(input)
	{
	case 1:
		System.out.println("Stop");
		break;
		
	case 2:
		System.out.println("Ready");
		break;
		
	case 3:
		System.out.println("Go");
		
	default:
		System.out.println("No option selected");
		
		
	}
}
}
