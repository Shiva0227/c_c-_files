#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float area,perimeter,height,width;
clrscr();
printf("Enter the height and width of the triangle\n");
scanf("%f%f",&height,&width);
area=width*height;
perimeter=2*(width+height);
printf("area of a rectangle is:%2.0f\n",area);
printf("perimeter of a rectangleis:%2.0f\n",perimeter);
getch();
}