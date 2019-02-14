#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,i,*ptr,sum=0;
clrscr();
printf("enter number of elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("Error!");
exit(0);
}
printf("enter the elements:");
for(i=0;i<n;++i)
{
scanf("%d",ptr+i);
sum+=*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
getch();
}