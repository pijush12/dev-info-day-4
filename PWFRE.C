/*Write a c program to count frequency of each element in an array
------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],count,i,n,j;
printf("Enter the no of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
b[j]=0;
}
}
if(b[i]!=0)
{
b[i]=count;
}
}
printf("\nFrequency of all the elements in this array are: \n");
for(i=0;i<n;i++)
{
if(b[i]!=0)
{    
printf("%d occurs %d times\n",a[i],b[i]);
}
}
getch();
}