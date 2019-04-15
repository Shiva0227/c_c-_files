package Lab1;

abstract class Witem extends Item {
private String author;
public String getAuthor()
{
	return author;
}
public void setAuthor(String author)
{
	this.author=author;
}
public Witem()
{
	System.out.println("dc");
}
}
