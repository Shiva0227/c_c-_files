#include<stdio.h>
#include<conio.h>
void main()
{
int n[10]={1,2,3,4,5,6,7,8,9,0};
int copied[10];
int loop;
clrscr ();
for(loop=0;loop<10;loop++)
{
copied[loop]=n[loop];
}
printf("original to copied\n");
for(loop=0;loop<10;loop++)
{
printf("%2d   %2d",n[loop],copied[loop]);
}
getch();
}