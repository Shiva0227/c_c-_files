#include<stdio.h>
struct distance
{
int feet;
float inch;
};
int main()
{
struct distance d1,d2,sum;
clrscr();
printf("enter info for 1st distance\n");
printf("enter feet:");
scanf("%d",&d1.feet);
printf("enter inch:");
scanf("%f",&d1.inch);
printf("enter information for 2nd distance\n");
printf("enter feet:");
scanf("%d",d2.feet);
printf("enter inch:");
scanf("%f",&d2.inch);
sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;
if(sum.inch>12.0)
{
sum.inch=sum.inch-12.0;
++sum.feet;
}
printf("sum of distances=%d feet and %.2f",sum.feet,sum.inch);
getch();
return 0;
}