#include<stdio.h>
#include<conio.h>
void main()
{
float w1,c1,w2,c2,result;
clrscr();

printf("items weight:");
scanf("%f",&w1);
printf("number of purchases:");
scanf("%f",&c1);
printf("items weight:");
scanf("%f",&w2);
printf("number of purchases 2:");
scanf("%f",&c2);
result=((w1*c1)+(w2*c2))/(c1+c2);
printf("average value=%f\n",result);
getch();
}