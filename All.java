package Lab1;

public class All {
public void director(String a)
{
	System.out.println("Name:"+a);
}
public void genre(String b)
{
	System.out.println("Genre:"+b);
}
public void YearReleased(int i)
{
	System.out.println("released year:"+i);
}
public void artist(String C)
{
	System.out.println("Name of the artist:"+C);
}

public static void main(String[] args) {
	Jbook i=new Jbook();
	i.setId(232343);
	i.setTitle("Shiva");
	i.setCopies(12);
	i.setAuthor("Shiva");
	i.setyearpublished(2018);
	System.out.println("id is:"+i.getId());
	System.out.println("Title is:"+i.getTitle());
	System.out.println("No of copies:"+i.getCopies());
	System.out.println("Author Name:"+i.getAuthor());
	System.out.println("published in year:"+i.getyearpublished());
	All a=new All();
	a.director("ASN");
	a.YearReleased(2018);
	a.artist("nikhil");
	a.genre("comedy");
}
}
