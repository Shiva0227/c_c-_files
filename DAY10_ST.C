#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
char str1[10]={'h','e','l','l','o'};
char str2[10]={'s','h','i','v','a'};
char str3[10];
int len;
int i,j,k;
clrscr();
strcpy(str3,str1);
printf("strcpy(str3,str1):%s\n",str3);
strcat(str1,str2);
printf("strcat(str1,str2):%s\n",str1);
len=strlen(str1);
printf("strlen(str1):%d\n",len);
strupr(str1);
printf("The uppercase elements are :%s\n",str1);
strlwr(str1);
printf("The lowercase elements are :%s\n",str1);
strrev(str1);
printf("string reverse is :%s\n",str1);
if(strcmp(str1,str2)!=0)
printf("the strings are equal\n");
else
printf("the strings are not equal\n");
i=strncmpi(str1,'h','e','l','l','o');
j=strncmpi(str1,str2);
k=strncmpi(str1,'h');
printf("%d%d%d",i,j,k);
getch();
}

