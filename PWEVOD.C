/*Write a  c program to put even and odd elements of array in two separate array
--------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,n,s1=0,s2=0;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
b[s1]=a[i];
s1++;
}
else
{
c[s2]=a[i];
s2++;
}
}
printf("\nThe even elements array is: ");
for(i=0;i<s1;i++)
printf("%d ",b[i]);
printf("\nThe odd elements array is: ");
for(i=0;i<s2;i++)
printf("%d ",c[i]);
getch();
}