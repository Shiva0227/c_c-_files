#include<stdio.h>
void f(int,short);
void main()
{
int i=100;
short s=12;
short *p=&s;
f(i,*s);
}