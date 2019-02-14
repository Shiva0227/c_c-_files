#include<stdio.h>
#include<string.h>
void main()
{
int array[100],n,a,b,t;
clrscr();
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(a=0;a<n;a++)
scanf("%d",&array[a]);
for(a=0;a<n-1;a++)
{
for(b=0;b<n-a-1;b++)
{
if(array[b]>array[b+1])
{
t=array[b];
array[b]=array[b+1];
array[b+1]=t;
}
}
}
printf("sorted list in ascending order:\n");
for(a=0;a<n;a++)
printf("%d\n",array[a]);
getch();
}