#include<stdio.h>
//#include<math.h>
struct complex
{
float real,img;
};
int main()
{
struct complex a,b,c;
printf("enter a and b:\n");
scanf("%f%f",&a.real,&a.img);
printf("enter c and d:\n");
scanf("%f%f",&b.real,&b.img);
c.real=a.real+b.real;
c.img=a.img+b.img;
printf("sum of complex numbers:%.2f+%.2f\n",c.real,c.img);
return 0;
}