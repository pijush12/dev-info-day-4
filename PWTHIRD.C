/*Write a c program to merge two array to third array
------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[20],i,n,m;
printf("Enter the no of elements in the 1st array: ");
scanf("%d",&n);
printf("\nEnter the 1st array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("\nEnter the no of elements in the 2nd array: ");
scanf("%d",&m);
printf("\nEnter the 2nd array elements: ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
c[i+n]=b[i];
}

printf("\nThe third array elements are: ");
for(i=0;i<m+n;i++)
printf("%d ",c[i]);
getch();
}
