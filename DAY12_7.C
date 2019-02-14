#include<stdio.h>
int main()
{
char str[100];
char *ptr;
int cntV,cntC;
printf("enter the string:");
gets(str);
ptr=str;
cntV=cntC=0;
while(*ptr!='\0')
{
if(*ptr=='A' ||*ptr=='E' || *ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
cntV++;
else
cntC++;
ptr++;
}
printf("total number of Vowels:%d,Consonant:%d\n",cntV,cntC);
getch();
}