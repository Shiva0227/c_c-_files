package Lab1;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Lab82 {
public static void main(String[] args) throws IOException {
		
		int c=0;
		String s= " My \n file \n name \n is \n demo1 \n";
		char  buffer[] = new char[s.length()];
		s.getChars(0, s.length(), buffer, 0);
		FileWriter f1 = new FileWriter("demo2.txt");
		f1.write(buffer);
		f1.close();
		FileReader f2 = new FileReader("demo2.txt");
		BufferedReader br = new BufferedReader(f2);
		String t;
		while((t=br.readLine())!=null)
		{
			c++;
			System.out.println(c+t);
		}
		f2.close();
	}
}
