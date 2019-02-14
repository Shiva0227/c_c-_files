#include<stdio.h>
#include<conio.h>
int main()
{
int data[100],i,n,steps,temp;
clrscr();
printf("enter the number of elements:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d. enter element:",i+1);
scanf("%d",&data[i]);
}
for(steps=0;steps<n;++steps)
for(i=steps+1;i<n;++i)
{
if(data[steps]>data[i])
{
temp=data[steps];
data[steps]=data[i];
data[i]=temp;
}
}
printf("in ascending order: ");
for(i=0;i<n;++i)
printf("%d ",data[i]);
getch();
}