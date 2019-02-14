#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
int i,n,c;
printf("enter the number of rows\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(c=0;c<=(n-i-2);c++)
printf("");
for(c=0;c<=i;c++)
printf("%ld",factorial(i)/(factorail(c)*factorial(i-c)));
printf("\n");
}
getch();
}
long factorial(int n)
{
int c;
long result=1;
for(c=1;c<=n;c++)
result=result*c;
return result;
}