#include<stdio.h>
struct student
{
char name[50];
int rollno;
float marks;
} s;
int main()
{
printf("enter the information:\n");
printf("Enter the name:");
scanf("%s",s.name);
printf("enter the rollnumber:");
scanf("%d",&s.rollno);
printf("enter the marks:");
scanf("%f",&s.marks);
printf("name:");
puts(s.name);
printf("Roll number:%d\n",s.rollno);
printf("Marks:%1f\n",s.marks);
getch();
}