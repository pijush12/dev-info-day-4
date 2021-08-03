/*Write a c program to right rotate array
---------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,last;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
last=a[n-1];
for(j=n-1;j>0;j--)
{
a[j]=a[j-1];
}
a[0]=last;
}
printf("\nThe left rotate array is: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}