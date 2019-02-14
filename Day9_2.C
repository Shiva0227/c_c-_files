#include<stdio.h>
#include<stdlib.h>
int count(int num)
{
int r,i=0;
while(num!=0)
{
r=num%10;
if(r==0)
{
i++;
}
num=num/10;
}
return i;
}
void main()
{
int n,i,fact=1,c;
clrscr();
printf("enter the number\n");
scanf("%d",n);
for(i=1;i<=n;i++)
{
c=c+count(fact*i);
}
printf("number of zero's in factorial is:%d",c);
getch();
}
