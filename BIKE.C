#include<stdio.h>
#include<conio.h>
void main()
{
int x;
float y;
printf("Distance in km:");
scanf("%d",&x);
printf("fuel spent in liters:");
scanf("%f",&y);
printf("average consumption(km/lt)%.3f",x/y);
printf("\n");
getch();

}