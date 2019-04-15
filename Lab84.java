package Lab1;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.util.Scanner;

public class Lab84 {
public static void main(String[] args) throws IOException{
	String filetype="undetermined";
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the File Name:");
	String input=sc.nextLine();
	File f=new File(input);
	System.out.println("File Status"+f.exists());
	System.out.println("File is Writeable"+" "+f.canWrite());
	System.out.println("FIle is Readable"+" "+f.canRead());
	System.out.println("Length of file"+" "+f.length());
	filetype=Files.probeContentType(f.toPath());
	System.out.println("File type:"+" "+filetype);
	
}
}
