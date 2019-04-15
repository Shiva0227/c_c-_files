package Lab1;

import java.util.Scanner;
import java.util.StringTokenizer;

public class Lab81 {

public static void main(String[] args) {
		
		int n;
		int sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the numbers");
		String s = sc.nextLine();
		StringTokenizer st=new StringTokenizer(s," ");
		while(st.hasMoreTokens())
		{
			String temp = st.nextToken();
			n=Integer.parseInt(temp);
			System.out.println(n);
			sum=sum+n;
			
		}
		System.out.println("Sum of the Integers is :"+sum);
		sc.close();
	}
}
