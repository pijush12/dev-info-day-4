/*Write a c program to sort even and odd elements of array separetely
----------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void sort(int [],int);
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
printf("\nThe sorted even elements array is: ");
sort(b,s1);
printf("\nThe sorted odd elements array is: ");
sort(c,s2);
getch();
}
void sort(int a[],int n)
{
int i,j,temp;
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

for(i=0;i<n;i++)
printf("%d ",a[i]);
}