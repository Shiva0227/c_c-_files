#include<stdio.h>
#include<conio.h>
void main()
{
int n,array[1000],a,b,t;
clrscr();
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(a=0;a<n;a++)
scanf("%d",&array[a]);
for(a=1;a<=n-1;a++)
{
b=a;
while(b>0 && array[b-1]>array[b])
{
t=array[b];
array[b]=array[b-1];
array[b-1]=t;
b--;
}
}
printf("sorted list is:\n");
for(a=0;a<=n-1;a++)
{
printf("%d\n",array[a]);
}
getch();
}