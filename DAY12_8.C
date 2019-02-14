#include<stdio.h>
int *return_pointer(int *,int);
int main()
{
int i,*ptr;
int arr[]={11,22,33,44,55};
i=4;
clrscr();
printf("Address of arr=%u\n",arr);
ptr=return_pointer(arr,i);
printf("after incrementing arr by 4\n");
printf("address of ptr=%u\n\n",ptr);
printf("value at %u is %d\n",ptr,*ptr);
getch();
}
int *return_pointer(int *p,int n)
{
p=p+n;
return p;
}
