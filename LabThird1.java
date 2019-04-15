package Lab1;

public class LabThird1 {
public int getSecondSmallest(int a[])
{
	int temp;
	for(int i=0;i<a.length;i++)
	{
		for(int j=i+1;j<a.length;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a[1];
}
public static void main(String[] args)
{
	int a[]= {3,4,5,2,1};
	LabThird1 lb=new LabThird1();
	int g=lb.getSecondSmallest(a);
	System.out.println(g);
}
}
