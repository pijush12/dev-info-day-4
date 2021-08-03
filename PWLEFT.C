/*Write a c program to left rotate array
---------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,first;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
first=a[0];
for(j=0;j<n;j++)
{
a[j]=a[j+1];
}
a[n-1]=first;
}
printf("\nThe left rotate array is: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}