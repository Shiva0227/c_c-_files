#include<stdio.h>
#include<conio.h>
void main()
{
char id[10];
int hour;
double value,salary;
printf("enter the employee id:\n");
scanf("%s",&id);
printf("enter the working hours:\n");
scanf("%d",&hour);
printf("enter the salary:\n");
scanf("%lf",&value);
salary=value*hour;
printf("employee id=%s\n salary=%2.0lf\n",id,salary);
getch();
}