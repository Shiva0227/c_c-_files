package Lab1;

import java.util.Scanner;

public class Lab52 {

static int a=1;
static int b=1;
public static int recursive(int number)
{
	///int number;
	if(number==1 || number==2)
	{
		return 1;
	}
	int res=recursive(number-1)+recursive(number-2);
	return res;
}
public static void nonrecursive(int number)
{
	System.out.println("Non recursive:"+a);
	
	System.out.println(b);
	for(int i=2;i<number;i++)
	{
		int temp=a+b;
		System.out.println(temp);
		b=a;
		a=temp;
	}
}
	public static void main(String[] args) {
		System.out.println("Enter the Number");
		Scanner sc=new Scanner(System.in);
		int number=sc.nextInt();
		System.out.println("Fibbonaci series upto"+" "+number+"are:");
		for(int i=1;i<number;i++)
		{
			System.out.println(recursive(i)+" ");
		}
		nonrecursive(number);
	}
}
