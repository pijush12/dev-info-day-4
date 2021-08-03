/*Write a c program to print all unique elements in the array
---------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,j,count,n;
printf("Please enter number of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe unique elements are: ")
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count==0)
printf("%d ",a[i]);
}
getch();
}