#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("enter the number:\n");
scanf("%d",&n);
printf("%d divisible by:",n);
for(i=1;i<=11;i++)
{
if(n%i==0)
printf("%d",i);
}
getch();
}

