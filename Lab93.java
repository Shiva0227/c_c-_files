package Lab1;

import java.util.HashMap;
import java.util.Scanner;

public class Lab93 {
int sum=0;
int square=0;
public HashMap<Integer,Integer> getSquares()
{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the numbers");
	int n=sc.nextInt();
	int arr[]=new int[n];
	HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
	for(int i=0;i<n;i++)
	{
		arr[i]=sc.nextInt();
		
	}
	for(int i=0;i<n;i++)
	{
		sum=arr[i]*arr[i];
		hm.put(arr[i], sum);
	}
	System.out.println(hm);
	return hm;
}
public static void main(String[] args) {
	Lab93 l=new Lab93();
	l.getSquares();
}
}
