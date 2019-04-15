package Lab1;


public class LabFirst1 {
	int n;
	int sum;
	public void calculatesum()
	{
		n=100;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(i%3==0 || i%5==0)
			{
				//System.out.println("Numbers:"+i);
				sum=sum+i;
			}
		}
		System.out.println("Sum:"+sum);
	}


public static void main(String[] args)
{
	LabFirst1 lab1=new LabFirst1();
	lab1.calculatesum();
}
}

