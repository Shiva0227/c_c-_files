#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("before swappin a=%d and b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nafter swapping a=%d\n and b=%d\n",a,b);
getch();
}