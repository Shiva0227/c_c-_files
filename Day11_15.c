#include<stdio.h>
	int fun(x:integer)
	{
		if(x>100)
		fun=x-10;
		else
		fun=fun(fun(x+11));
	}
}
