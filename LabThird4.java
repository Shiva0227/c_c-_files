package Lab1;

public class LabThird4 {
static final int maxchar=246;
static void getOccuringChar(String str)
{
	int count[]=new int[maxchar];
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		count[str.charAt(i)]++;
		char ch[]=new char[str.length()];
				ch[i]=str.charAt(i);
				int find=0;
				for(int j=0;j<=i;j++)
				{
					if(str.charAt(i)==ch[j])
						find++;
				}
				if(find==1)
				{
					System.out.println("occuring:"+str.charAt(i)+" "+ "is"+" "+count[str.charAt(i)]);
				}
	}
}
public static void main(String[] args) {
	String str="Shiva";
	getOccuringChar(str);
}
}