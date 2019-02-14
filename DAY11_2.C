#include<stdio.h>
void fun(int);
int main()
{
int(*ptr)(int)=fun;
(*ptr)(3);
return 0;
}
int fun(int n)
{
for(;n>0;n--)
printf("hello");
return 0;
}