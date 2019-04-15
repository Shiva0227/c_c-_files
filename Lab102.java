package Lab1;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Lab102 implements Runnable {

	@Override
	public void run() {
		try
		{
			LocalDateTime current=LocalDateTime.now();
			DateTimeFormatter formatter=DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
			String formated=current.format(formatter);
			System.out.println(" "+formated);
			Thread.sleep(10000);
			run();
		}
		catch(Exception e)
		{
			
		}
		
		
	}
	
	

}





