#include<stdio.h>
#include<conio.h>
void main()
{
char str[10],temp;
int i,j;
clrscr();
printf("enter the string:\n");
scanf("%s",&str);
for(i=0;i<strlen(str);i++)
for(j=i+1;j<strlen(str);j++)
if(str[i]>=str[j])
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
for(i=0;i<strlen(str);i++)
{
printf("%d",str[i]);
}
getch();
}