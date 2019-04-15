package Lab1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;

public class Lab91
{
public ArrayList getValue(HashMap<String,Integer>hm)
{
	ArrayList<Integer> a=new ArrayList<Integer>();
	a.addAll(hm.values());
	Collections.sort(a);
	return a;
}
public static void main(String[] args) {
	HashMap<String,Integer> hm=new HashMap<String,Integer>();
	hm.put("shiva",new Integer(5));
	hm.put("Nikhil",new Integer(6));
	hm.put("krishna",new Integer(7));
	hm.put("Vijay",new Integer(5));
	hm.put("sai",new Integer(3));
	hm.put("A",new Integer(1));
	
	Lab91 hm1=new Lab91();
	System.out.println(" "+hm1.getValue(hm));
}
}
