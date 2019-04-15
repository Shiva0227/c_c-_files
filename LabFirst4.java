package Lab1;

public class LabFirst4 {
boolean flag=false;

	public boolean checkNumber(int n)
	{
		int p=0;
		if(n==0)
		{
			System.out.println("The number is not the power of 2");
		}
		for(int i=1;i<=n;i++)
		{
			p=i*2;
			if(p==n)
			{
				flag=true;
			}
		}
		if(flag==true)
		{
			System.out.println("The given number is the power of 2");
		}
		else
		{
			System.out.println("The given number is not power of 2");
		}
		return flag;
	}
	public static void main(String[] args) {
		LabFirst4 lb=new LabFirst4();
		lb.checkNumber(13);
	}
}
