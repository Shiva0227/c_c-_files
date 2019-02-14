#include<stdio.h>
#include<String.h>
void swap(char *x,char *y)
{
char temp;
temp=*x;
*x=*y;
*y=temp;
}
void permute(char *a,int l,int r)
{
int i;
if(l==r)
printf("%s\n",a);
else
{
for(i=1;i<=r;i++)
{
swap((a+1),(a+i));
permute(a,l+1,r);
swap((a+1),(a+i));
}
}
}
int main()
{
char str[]="ABC";
int n=strlen(str);
clrscr();
permute(str,0,n-1);
getch();
}