/*Write a c program to count total number of even and odd elements in an array
----------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],even=0,odd=0,i,n;
printf("Enter the number of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
even=even+1;
else
odd=odd+1;
}
printf("\nThe number of even number in the array is %d and odd number is %d",even,odd);
getch();
}