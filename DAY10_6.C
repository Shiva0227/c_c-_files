#include<stdio.h>
#include<string.h>
int main()
{
int smallest,ss;
int array[100],size,i;
clrscr();
printf("enter the elements:\n");
scanf("%d",&size);
printf("enter %d elements:",size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
if(array[0]<array[1])
{
smallest=array[0];
ss=array[1];
}
else
{
smallest=array[1];
ss=array[0];
}
for(i=2;i<size;i++)
{
if(array[i]<smallest)
{
ss=smallest;
smallest=array[i];
}
else if(array[i]<ss)
{
ss=array[i];
}
}
printf("ss element is %d",ss);
getch();
}