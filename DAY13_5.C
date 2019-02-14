#include<stdio.h>
int main()
{
int phy,chem,maths;
int rollno;
int total;
char name[20];
float per;
clrscr();
printf("enter the name:\n");
scanf("%s",name);
printf("Enter the rollno:\n");
scanf("%d",&rollno);
printf("enter subject marks:");
scanf("%d\n%d\n%d\n",&phy,&chem,&maths);
per=total/3.0;

if(per>=90)
{
printf("Grade A");
}
else if(per>=80)
{
printf("Grade B");
}
else if(per>=70)
{
printf("Grade c");
}
else if(per>=60)
{
printf("Grade D");
}
else if(per>=50)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
printf("percentage=%2.0f\n",per);
getch();
return 0;
}