#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,distance;
clrscr();
printf("distance x1:");
scanf("%f",&x1);
printf("y1:");
scanf("%f",&y1);
printf("distance x2:");
scanf("%f",&x2);
printf("y2:");
scanf("%f",&y2);
distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("distance is:%.4f",sqrt(distance));
//printf("\n");
getch();
}