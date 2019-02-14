#include<stdio.h>
#include<conio.h>
void main()
{
int rs,a,b,c,d,e,f,g,h;
clrscr();
printf("enter the amount in rupees:");
scanf("%d",&rs);
while(rs>=2000)
{
a=rs/2000;
printf("the number of thousands are:%d\n",a);
break;
}
while(rs>=500)
{
b=rs/500;
printf("the number of five hunderds are:%d\n",b);
break;
}
while(rs>=200)
{
c=rs/200;
printf("the number of two hunderds are:%d\n",c);
break;
}
while(rs>=100)
{
d=rs/100;
printf("the number of hundreds are:%d\n",d);
break;
}
while(rs>=50)
{
e=rs/50;
printf("the number of fifites are:%d\n",e);
break;
}
while(rs>=20)
{
f=rs/20;
printf("the number of twenties are:%d\n",f);
break;
}
while(rs>=10)
{
g=rs/10;
printf("the number of ten's are:%d\n",g);
break;
}
getch();
}