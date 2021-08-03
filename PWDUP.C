/*Write a C program to count total number of duplicate elements in an array
---------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,j,count,n,m=0;
printf("Please enter number of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count==0)
m++;
}
printf("\nThe number of duplicate elements are: %d",n-m);
getch();
}