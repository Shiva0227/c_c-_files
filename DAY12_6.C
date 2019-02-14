#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i,num;
float *data;
clrscr();
printf("enter the number of elements:");
scanf("%d",&num);
data=(float*) calloc(num,sizeof(float));
if(data==NULL)
{
printf("error!!");
exit(0);
}
printf("\n");
for(i=0;i<num;++i)
{
printf("enter number %d:",i+1);
scanf("%f",data+i);
}
for(i=1;i<num;++i)
{
if(*data<*(data+i))
*data=*(data+i);
}
printf("largest element=%.2f",*data);
getch();
}