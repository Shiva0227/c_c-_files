#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
char name[20];
int rollno;
float marks;
}s;
void main()
{
FILE *fp1,*fp2;
char next='y';
int rollno;
int resize,ch;
clrscr();
fp1=fopen("ST.DAT","rb+");
if(fp1==NULL)
{
fp1=fopen("ST.DAT","wb+");
if(fp1==NULL)
{
printf("cannot open file");
exit(1);
}
}
resize=sizeof(s);
while(1)
{
printf("select any of the options\n");
printf("\n1:Add Record\n2:Display Record\n3:Search\n4:Modify\n5:Delete\n6:Exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	fseek(fp1,0,SEEK_END);
	next='y';
	while(next == 'y')
	{
	   printf("enter the rollno\n");
	   scanf("%d",&s.rollno);
	   printf("enter the name\n");
	   scanf("%s",s.name);
	   printf("enter the marks\n");
	   scanf("%f",&s.marks);
	   fwrite(&s,resize,1,fp1);
	   printf("Do you want to add another record(y/n):\n");
	   fflush(stdin);
	   next=getche();
	   }
	   break;
case 2:
	rewind(fp1);
	printf("rollno\tname\tmarks\n");
	printf("************************\n");
	while(fread(&s,resize,1,fp1)==1)
	{
	printf("\n%d\t%s\t%f\n",s.rollno,s.name,s.marks);
	}
	break;
case 3:
	next='y';
	while(next == 'y')
	{
	printf("enter the rollno to search:\n");
	scanf("%d",&rollno);
	rewind(fp1);
	while(fread(&s,resize,1,fp1)==1)
	{
	if(rollno==s.rollno)
	{
	printf("student details\n");
	printf("rollno\tname\marks\n");
	printf("%d\t%s\t%f\n",s.rollno,s.name,s.marks);
	fseek(fp1,-resize,SEEK_CUR);
	fwrite(&s,resize,1,fp1);
	break;
	}
	}
	printf("Do you want to search another record(y/n):\n");
	fflush(stdin);
	next=getche();
	}
	break;
case 4:
	next='y';
	while(next == 'y')
	{
	printf("enter the rollno to modify\n");
	scanf("%d",&rollno);
	rewind(fp1);
	while(fread(&s,resize,1,fp1)==1)
	{
	if(s.rollno,rollno)
	{
	printf("\nenter rollno,name,marks\n");
	scanf("%d%s%f",s.rollno,&s.name,&s.marks);
	fseek(fp1,-resize,SEEK_CUR);
	fwrite(&s,resize,1,fp1);
	break;
	}
	}
	printf("\nDo you want to modify another record(y/n):\n");
	fflush(stdin);
	next=getche();
	}
	break;
case 5:
	next = 'y';
	while(next == 'y')
	{
	printf("enter the rollno to delete:");
	scanf("%d",&rollno);
	fp2 = fopen("TEMP.DAT","w");
	rewind(fp1);
	while(fread(&s,resize,1,fp1)==1)
	{
	if(rollno==s.rollno)
	{
	fwrite(&s,resize,1,fp2);
	}
	}
	fclose(fp1);
	fclose(fp2);
	remove("ST.DAT");
	rename("TEMP.DAT","ST.DAT");
	fp1=fopen("ST.DAT","r");
	printf("Do you want to delete another record(y/n):\n");
	fflush(stdin);
	next = getche();
	}
	break;
case 6:
	fclose(fp1);
	exit(0);
default:
	printf("invalid choice!! please select another option\n");
	break;
	}
	}
	}

