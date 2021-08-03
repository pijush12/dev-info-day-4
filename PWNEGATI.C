/*Write a c program to count total number of negative elements in an array
--------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,count=0;
printf("Enter the no of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<0)
count++;
}
printf("\nThe no of array elements in the array is %d",count);
getch();
}