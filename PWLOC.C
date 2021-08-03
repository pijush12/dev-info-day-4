/*Write a c program to search an element in an array
-------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],item,n,i,loc=-1;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the array items: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the item whose location you want to know ");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
loc=i;
break;
}
}
if(loc==-1)
printf("\nThe item is not found");
else
printf("\nThe location of the item is %d",loc+1);
getch();
}