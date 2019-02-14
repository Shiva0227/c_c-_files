#include<stdio.h>
#include<stdlib.h>
struct student
{
float rollno;
char name[20];
float age;
float marks;
}s;
int main()
{
//int i;
//int student;
clrscr();
printf("enter the student information:\n");
printf("enter the rollno:");
scanf("%f",&s.rollno);
printf("enter the name:\n");
scanf("%s",s.name);
printf("enter the age:\n");
scanf("%f",&s.age);
printf("enter the marks:\n");
scanf("%f",&s.marks);
printf("student information :\n%.1f\n %s\n %.1f\n %.1f\n",s.rollno,s.name,s.age,s.marks);
printf("size is:%d",sizeof(s));
getch();
return 0;
}