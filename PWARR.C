/*Write a c program to copy all elements from an array to another array
-------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,n;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe original array elements are: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
b[i]=a[i];
}
printf("\nThe copied array elements are: ");
for(i=0;i<n;i++)
printf("%d ",b[i]);
getch();
}