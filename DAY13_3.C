#include<stdio.h>
#include<conio.h>
struct student
{
//float rollno;
char name[20];
int age,rollno;
char address;
int marks;
}s[5];
int main()
{
int i;
struct student s[5];
clrscr();
for(i=1;i<=5;i++)
{
printf("enter the rollno:",i);
scanf("%d",&s[i].rollno);
printf("enter the name:\n");
scanf("%s",s[i].name);
printf("enter the age:\n");
scanf("%d",&s[i].age);
printf("enter the address:\n");
scanf("%s",s[i].address);
printf("enter the marks:");
scanf("%d",&s[i].marks);
}
{
for(i=1;i<=5;i++)
printf("The details of student is  rollno:%d\n name:%s\n age:%d\n address:%s\n marks:%d\n",s[i].rollno,s[i].name,s[i].age
,s[i].address,s[i].marks);
}
getch();
}
