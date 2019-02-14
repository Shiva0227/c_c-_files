#include<stdio.h>
void funct()
{
printf("abc");
}
int main(void)
{
clrscr();
printf("address of function main() is:%p\n",main);
printf("addressvof function funct() is:%p\n",funct);
getch();
}