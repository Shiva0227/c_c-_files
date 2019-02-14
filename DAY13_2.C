#include<stdio.h>
#include<conio.h>
struct student
{
//float rollno;
char name[20];
int age,rollno;
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
}
{
printf("The details of student with rollno.2 is rollno:%d\n name:%s\n age:%d\n",s[2].rollno,s[2].name,s[2].age);
}
getch();
}
