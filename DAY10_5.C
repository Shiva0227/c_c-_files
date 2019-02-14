#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
int arr[50],i,size;
int first,second;
clrscr();
printf("enter number of elements in an array:\n");
scanf("%d",&size);
printf("enter %d elements of an array\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
first=second=INT_MIN;
for(i=0;i<size;i++)
{
if(arr[i]>first);
{
second=first;
first=arr[i];
}
if(arr[i]>second&&arr[i]<first)
{
second=arr[i];
}
}
//printf("the largest number in the array is :%d\n",first);
printf("the second largest number in the array is:%d\n",second);
getch();
}