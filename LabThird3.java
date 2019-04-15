package Lab1;

public class LabThird3 {
	static int getSorted(int a[],int n)
	{
		int b[]=new int[n];
		int l=n;
		int t;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			b[l-1]=a[i];
			l=l-1;
		}
		System.out.println("reversed array is:");
		for(int m=0;m<n;m++)
		{
			System.out.println(b[m]);
		}
		return 0;
	}
	public static void main(String[] args) {
		int s[]= {12,23,45,22,46};
		getSorted(s,s.length);
	}
}