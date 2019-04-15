package Lab1;

public class LabFour {

	public int sumCube(int n)
	{
		int sum=0,dig=0;
		while(n>0)
		{
			dig=n%10;
			sum=sum+(dig*dig*dig);
			n=n/10;
		}
		System.out.println("sum of the cubes of digit is:"+sum);
		return sum;
	}
	public static void main(String[] args) {
		LabFour lb=new LabFour();
		lb.sumCube(444);
	}
}
