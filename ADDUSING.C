#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*x,*y,c;
x=&a;
y=&b;
clrscr();
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
c= (*x)+(*y);
printf("The sum is %d " ,c);
getch();
}