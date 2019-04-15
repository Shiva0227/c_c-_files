package Lab1;

public class LabFirst2 {
	
	public static void calculateDifference(int n)
	{
		int sum1=0,sum2=0,sum=0;
		for(int i=0;i<=n;i++)
		{
			sum=sum+(i*i);
			sum1=sum*sum;
			sum2=sum-sum1;
		}
		
		System.out.println("Sum of first n square natural numbers:"+sum);
		System.out.println("square of thier sum:"+sum1);
		System.out.println("Sum value:"+sum2);
	}
public static void main(String[] args) {
	LabFirst2 .calculateDifference(4);
	
}
}
