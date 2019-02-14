#include<stdio.h>
struct item
{
char itemname[30];
int qty;
float price;
float amount;
};
int main()
{
struct item itm;
struct item *pItem;
pItem=&itm;
printf("enter the product name:");
gets(pItem->itemname);
printf("enter price:");
scanf("%f",&pItem->price);
printf("enter quantity:");
scanf("%d",&pItem->qty);
pItem->amount=(float)pItem->qty*pItem->price;
printf("name:%s",pItem->itemname);
printf("price:%f",pItem->price);
printf("quantity:%d",pItem->qty);
printf("total amount:%f",pItem->amount);
getch();
}