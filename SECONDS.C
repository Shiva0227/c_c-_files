#include<stdio.h>
#include<conio.h>
void main()
{
int sec,hours,minutes,seconds;
clrscr();
printf("enter the seconds:\n");
scanf("%d",&sec);
hours=(sec/3600);
minutes=(sec-(3600*hours))/60;
seconds=(sec-(3600*hours)-(minutes*60));
printf("hours:minutes:seconds:%d:%d:%d\n",hours,minutes,seconds);
getch();
}