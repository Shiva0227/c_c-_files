package Lab1;

import java.util.HashMap;
import java.util.Scanner;

public class Lab92 {

	public static HashMap countCharacter(char[] str)
	{
		HashMap<String,Integer> hm=new HashMap<String,Integer>();
		for(int i=0;i<str.length;i++)
		{
			int count=0;
			for(int j=0;j<str.length;j++)
			{
				if(j<i && str[j]==str[i])
				{
					break;
				}
				if(str[i]==str[j])
				{
					count++;
				}
			}
			if(count>0)
			{
				String name=Character.toString(str[i]);
				hm.put(name, count);
			}
		}
		return hm;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str;
		System.out.println("Enter array of characters:");
		char[] ch=sc.next().toCharArray();
		System.out.println(" "+countCharacter(ch));
		
	}
	
}
