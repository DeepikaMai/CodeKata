#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i;
clrscr();
printf("Enter 2 numbers: "):
scanf(%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
if(i%2==0)
{
printf("\n");
}
else
{
printf("%d",i);
}
}
getch();
}
