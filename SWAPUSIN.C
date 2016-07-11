#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,temp;
clrscr();
printf("Enter 2 number : ");
scanf("%d %d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
printf("The swaped values are %d and %d ",n1,n2);
getch();
}