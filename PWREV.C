/*Write a c program to find reverse of an array
-------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe reverse array is: ");
for(i=n-1;i>=0;i--)
printf("%d ",a[i]);
getch();
}