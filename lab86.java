package Lab1;

import java.time.LocalDate;
import java.time.Month;
import java.time.Period;
import java.time.format.DateTimeFormatter;
import java.time.format.FormatStyle;

public class lab86 {
	
	public void date()
	{
		LocalDate worldcup=LocalDate.of(2011,Month.APRIL,02);
		LocalDate end=LocalDate.now();
		System.out.println("The Date given is:"+worldcup);
		Period period=worldcup.until(end);
		System.out.println("Days:"+period.getDays());
		System.out.println("Months:"+period.getMonths());
		System.out.println("Years:"+period.getYears());
		
		LocalDate currentdate=LocalDate.now();
		DateTimeFormatter formatter1=DateTimeFormatter.ofLocalizedDate(FormatStyle.FULL);
		System.out.println("Today's Date is:"+currentdate.format(formatter1));
		
		
		
	}
	public static void main(String[] args) {
		
	lab86 l=new lab86();
	l.date();
	
	
	
	
}
}