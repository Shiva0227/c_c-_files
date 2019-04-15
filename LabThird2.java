package Lab1;
//import java.util.*;
import java.util.Scanner;

public class LabThird2 {
public static void main(String[] args) {
	LabThird2 p=new LabThird2();
	p.mtd1();
}


public void mtd1()
{
	int i,j,z=0;
	String temp;
	Scanner x=new Scanner(System.in);
	System.out.println("Enter the number of strings");
	int a=x.nextInt();
	z=a/2;
	String str[]=new String[a];
	Scanner y=new Scanner(System.in);
	System.out.println("Enter the string");
	for(i=0;i<a;i++)
		str[i]=y.nextLine();
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(str[i].compareTo(str[j])>0)
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
System.out.println("after arraging");
if(a%2==0)
{
	for(i=0;i<a;i++)
	{
		if(i<z)
			System.out.println((str[i].toUpperCase())+"\t");
		else
			System.out.println(str[i]+"\t");
	}
}
else if(a%2!=0)
{
	for(i=0;i<a;i++)
	{
		if(i<=z)
			System.out.println((str[i].toUpperCase())+"\t");
		else
			System.out.println(str[i]+"\t");
	}
}
}

}