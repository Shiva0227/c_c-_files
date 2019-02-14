#include<stdio.h>
#include<math.h>
#include<conio.h>
struct date
{
float day;
float month;
float year;
};
void main()
{
struct date d1,d2;
clrscr();
printf("enter first date(dd/mm/yyyy):\n");
scanf("%f%f%f",&d1.day,&d1.month,&d1.year);
printf("enter second date(dd/mm/yyyy):\n");
scanf("%f%f%f",&d2.day,&d2.month,&d2.year);
if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
printf("Dates are EQUAL\n");
else
printf("Dates are UNEQUAL\n");
getch();
}