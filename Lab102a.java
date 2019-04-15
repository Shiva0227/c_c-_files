package Lab1;

public class Lab102a {
public static void main(String[] args) {
	Lab102 t1=new Lab102();
	Thread t2=new Thread(t1);
	t2.start();
	
}
}
