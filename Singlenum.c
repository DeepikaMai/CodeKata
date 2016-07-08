#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b,i,j,n;
printf("Enter the number of num to list in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==a[i+1])
{
i++;
}
else
{
printf("Single value %d",a[i]);
}
}
getch();
}
