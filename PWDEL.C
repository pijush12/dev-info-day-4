/*Write a c program to delete an element from array at a specified position
----------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,loc;
printf("Enter the no of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the location where you want to enter the array elements: ");
scanf("%d",&loc);
for(i=loc;i<n-1;i++)
a[i]=a[i+1];
printf("\nAfter deletion the array elements are: ");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
getch();
}