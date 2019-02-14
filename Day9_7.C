#include<stdio.h>
#include<string.h>
void main()
{
int custid,consumed;
float chg,surchg=0,exceeds,netamt;
char cosname[25];
clrscr();
printf("input customer id:\n");
scanf("%d",&custid);
printf("name of the customer:");
scanf("%s",cosname);
printf("units consumed by coustomer:");
scanf("%d",&consumed);
if(consumed<199)
chg=1.20;
else if(consumed>=200 && consumed<400)
chg=1.50;
else if(consumed>=400 && consumed<600)
chg=1.80;
else
chg=2.00;
exceeds=consumed*chg;
if(exceeds>400)
surchg=exceeds*15/100.0;
netamt=exceeds+surchg;
if(netamt<100)
netamt=100;
printf("electricity bill\n");
printf("customer IDNO:%d\n",custid);
printf("customer name:%s\n",cosname);
printf("unit consumed:%d\n",consumed);
printf("amount charges @rs.%4.2f per unit:%8.2f\n",chg,exceeds);
printf("surcharge amount:%8.2f\n",surchg);
printf("net amountpaid by the customer:%8.2f\n",netamt);
getch();
}
