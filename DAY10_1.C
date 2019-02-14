#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,pos,x;
clrscr();
printf("enter how many value in array\n");
scanf("%d",&n);
printf("enter %d value in ascending order\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("which value to be insert");
scanf("%d",&x);
for(i=0;i<n;i++)
if(x<a[i])
{
pos=i;
break;
}
for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos]=x;
printf("your exist list is:\n");
for(i=0;i<n;i++)
printf("%5d",a[i]);
printf("\nlist is:\n");
for(i=0;i<=n;i++)
printf("%5d",a[i]);
getch();
}