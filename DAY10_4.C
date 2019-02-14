#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100];
int i,j,n,count=0;
clrscr();
printf("enter the array size:");
scanf("%d",&n);
printf("enter elements in an array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
count++;
break;
}
}
}
printf("duplicate elements=%d",count);
getch();
}