/*Write a c program to insert an element in an array
---------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,loc,item;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the location where you want to enter the item: ");
scanf("%d",&loc);
printf("\nEnter the item which you want to insert: ");
scanf("%d",&item);
i=n-1;
while(i>=loc)
{
a[i+1]=a[i];
i--;
}
a[loc]=item;
printf("\nThe new array elements are: ");
for(i=0;i<=n;i++)
printf("%d ",a[i]);
getch();
}