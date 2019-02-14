#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the numbers for a and b\n");
scanf("%d%d",&a,&b);
printf("before swapping a=%d\n and b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping a=%d\n and b=%d\n",a,b);
getch();
}