/*Write a c program to sort array elements in ascending or descending order
----------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
printf("Enter the no of elements in an array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nThe sorted array is: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}