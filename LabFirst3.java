package Lab1;

public class LabFirst3 {

	public boolean checkNumber(int n)
	{
		int i=0;
		boolean value;
		{
			i=n%10;
			n=n/10;
			value=true;
			while(n>0) {
				
			
			if(i<=n%10)
			{
				value=false;
				break;
			}
			i=n%10;
			n=n/10;
			}	
		}
		return value;
	}
	public static void main(String[] args) {
		LabFirst3 lb=new LabFirst3();
		boolean result=lb.checkNumber(125);
		System.out.println(result);
		
	}
}
